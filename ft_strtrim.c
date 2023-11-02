/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarkaid <pmarkaid@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:30:26 by pmarkaid          #+#    #+#             */
/*   Updated: 2023/11/02 15:16:29 by pmarkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	setlen;
	char	*start;
	char	*end;
	char	*res;

	setlen = ft_strlen(set);
	start = (char *)s1;
	end = (char *)s1 + ft_strlen(s1);
	if (ft_strstr((char *)s1, (char *)set) == s1)
		start = (char *)s1 + setlen;
	if (ft_strstr(end - setlen, (char *)set) == end - setlen)
		end = (char *)end - setlen;
	res = (char *)malloc(sizeof(char) * (end - start + 1));
	ft_strlcpy(res, start, end - start + 1);
	return (res);
}
