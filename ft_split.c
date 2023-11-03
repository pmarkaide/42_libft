/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarkaid <pmarkaid@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 10:22:17 by pmarkaid          #+#    #+#             */
/*   Updated: 2023/11/03 15:20:10 by pmarkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlenc(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}
size_t ft_count_words(char const *s, char c)
{
	size_t i;
	size_t	words;

	i = 0;
	words = 0;
	while(*s)
	{
		if(*s == c)
			s++;
		else
		{
			s += ft_strlenc(s, c);
			words++;
		}
	}
	return(words);
}
char	*ft_strldup(const char *s1, size_t len)
{
	char	*copy;
	size_t	i;

	copy = (char *)malloc((len + 1) * sizeof(char));
	if (copy == NULL)
		return (0);
	i = 0;
	while (i < len - 1 && s1[i] != '\0')
	{
		copy[i] = s1[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}


char	**ft_split(char const *s, char c)
{
	size_t words;
	size_t i = 0;
	size_t word_len;
	char **res;

	words = ft_count_words(s, c);
	printf("words: %zu\n", words);
	res = malloc((words + 1) * sizeof(*res));
	if (!res)
		return (NULL);
	while(*s && i < words)
	{
		if(*s == c)
			s++;
		word_len = ft_strlenc(s, c);
		printf("word_len: %zu\n", word_len); 
		res[i] = ft_strldup(s, word_len);
		s += word_len;
		i++;
	}
	res[i] = NULL;
	return(res);
}



int main() {
   	char str3[] = "   Spaces between words   ";
    char delimiter = ' ';

    char **result1 = ft_split(str3, delimiter);

    int i = 0;
    while (result1[i] != NULL) {
        printf("Result1[%d]: \"%s\"\n", i, result1[i]);
        i++;
    }

    return 0;
}

