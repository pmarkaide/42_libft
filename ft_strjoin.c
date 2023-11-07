/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarkaid <pmarkaid@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:17:38 by pmarkaid          #+#    #+#             */
/*   Updated: 2023/11/07 10:36:45 by pmarkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		total_len;
	char	*res;

	if (!s1 || !s2)
		return (NULL);
	total_len = 0;
	total_len += ft_strlen(s1);
	total_len += ft_strlen(s2);
	res = (char *)malloc((total_len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	res = ft_strcpy(res, s1);
	res = ft_strcat(res, s2);
	return (res);
}
