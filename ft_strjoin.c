/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarkaid <pmarkaid@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:17:38 by pmarkaid          #+#    #+#             */
/*   Updated: 2023/10/26 15:01:20 by pmarkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		total_len;
	char	*res;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	total_len = 0;
	total_len += ft_strlen(s1);
	total_len += ft_strlen(s2);
	res = (char *)malloc((total_len + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	res = ft_strcpy(res, s1);
	res = ft_strcat(res, s2);
	return (res);
}
