/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarkaid <pmarkaid@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:57:33 by pmarkaid          #+#    #+#             */
/*   Updated: 2023/11/08 11:30:45 by pmarkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = NULL;
	if ((char)c == '\0')
		return ((char *)(s + ft_strlen(s)));
	while (*s)
	{
		if (*s == (char)c)
			last = (char *)s;
		s++;
	}
	return (last);
}
