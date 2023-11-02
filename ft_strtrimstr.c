/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarkaid <pmarkaid@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:30:26 by pmarkaid          #+#    #+#             */
/*   Updated: 2023/11/02 15:25:36 by pmarkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrimstr(char const *s1, char const *s2)
{
	size_t	s2len;
	char	*start;
	char	*end;
	char	*res;

	s2len = ft_strlen(s2);
	start = (char *)s1;
	end = (char *)s1 + ft_strlen(s1);
	if (ft_strstr((char *)s1, (char *)s2) == s1)
		start = (char *)s1 + s2len;
	if (ft_strstr(end - s2len, (char *)s2) == end - s2len)
		end = (char *)end - s2len;
	res = (char *)malloc(sizeof(char) * (end - start + 1));
	ft_strlcpy(res, start, end - start + 1);
	return (res);
}
