/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarkaid <pmarkaid@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 12:12:25 by pmarkaid          #+#    #+#             */
/*   Updated: 2024/01/17 14:41:56 by pmarkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putptr_fd(unsigned long ptr, int fd)
{
	int	p;

	p = 0;
	p = ft_error_w(p, ft_putstr_fd("0x", fd));
	if (p == -1)
		return (-1);
	p = ft_error_w(p, ft_putnbr_fd_hex(ptr, fd, 0));
	if (p == -1)
		return (-1);
	return (p);
}
