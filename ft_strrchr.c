/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarkaid <pmarkaid@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:57:33 by pmarkaid          #+#    #+#             */
/*   Updated: 2023/10/26 15:56:51 by pmarkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include  <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	int len;
	char *last;
	last = NULL;

	len = ft_strlen(s);
	if (c == '\0')
		return ((char *)(s + len));
	while (len > 0)
	{
		if (s[len - 1] == (char)c)
			last = (char *)&s[len - 1];
		len--;
	}
	
	if(last != NULL)
		return(last);
	return (NULL);
}

int main() {
	char *src = "the cake is a lie !I'm hidden lol\r\n\0";
    char *d1 = strrchr(src, ' ');
    char *d2 = ft_strrchr(src, ' ');

	printf("strchr pos: %s\n",d1);
	printf("ft_strchr pos: %s\n",d2);

    return 0;
}