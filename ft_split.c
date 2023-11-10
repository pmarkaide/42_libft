/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarkaid <pmarkaid@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 10:22:17 by pmarkaid          #+#    #+#             */
/*   Updated: 2023/11/10 10:14:40 by pmarkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strlenc(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

static size_t	ft_count_words(char const *s, char c)
{
	size_t	words;

	words = 0;
	while (*s)
	{
		if (*s != c)
		{
			s += ft_strlenc(s, c);
			words++;
		}
		else
			s++;
	}
	return (words);
}

static char	**ft_free_array_if_nulls(char **arr)
{
	int	i;

	i = 0;
	while (arr[i] != NULL)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (NULL);
}

static char	**ft_write_splits(char **res, size_t words, char const *s, char c)
{
	size_t	word_len;
	size_t	i;

	i = 0;
	while (*s && i < words)
	{
		if (*s == c)
			s++;
		else
		{
			word_len = ft_strlenc(s, c);
			res[i] = ft_substr(s, 0, word_len);
			if (res[i] == NULL)
				return (ft_free_array_if_nulls(res));
			s += word_len;
			i++;
		}
	}
	res[i] = NULL;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	char	**res;

	if (!s)
		return (NULL);
	words = ft_count_words(s, c);
	res = (char **)malloc((words + 1) * sizeof(*res));
	if (!res)
		return (NULL);
	return (ft_write_splits(res, words, s, c));
}
