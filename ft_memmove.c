/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarkaid <pmarkaid@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:54:28 by pmarkaid          #+#    #+#             */
/*   Updated: 2023/10/31 12:29:42 by pmarkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	temp[len];

	if (dst > src && dst < src + len)
	{
		ft_memcpy(temp, src, len);
		ft_memcpy(dst, temp, len);
	}
	else
	{
		ft_memcpy(dst, src, len);
	}
	return (dst);
}
