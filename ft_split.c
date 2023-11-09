/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarkaid <pmarkaid@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 10:22:17 by pmarkaid          #+#    #+#             */
/*   Updated: 2023/11/09 10:42:32 by pmarkaid         ###   ########.fr       */
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

static char	*ft_strldup(const char *s1, size_t len)
{
	char	*copy;
	size_t	i;

	copy = (char *)malloc((len + 1) * sizeof(char));
	if (!copy)
		return (NULL);
	i = 0;
	while (i < len - 1 && s1[i] != '\0')
	{
		copy[i] = s1[i];
		i++;
	}
	copy[i] = '\0';
	if (!copy)
		return (NULL);
	return (copy);
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	size_t	i;
	size_t	word_len;
	char	**res;

	i = 0;
	if (!s)
		return (NULL);
	words = ft_count_words(s, c);
	res = (char **)malloc((words + 1) * sizeof(*res));
	if (!res)
		return (NULL);
	while (*s && i < words)
	{
		if (*s == c)
			s++;
		else
		{
			word_len = ft_strlenc(s, c);
			res[i++] = ft_strldup(s, word_len + 1);
			s += word_len;
		}
	}
	res[i] = NULL;
	return (res);
}
