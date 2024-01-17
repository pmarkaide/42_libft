/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd_hex.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarkaid <pmarkaid@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 10:28:41 by pmarkaid          #+#    #+#             */
/*   Updated: 2024/01/17 14:41:17 by pmarkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_fd_hex(unsigned long n, int fd, int uppercase)
{
	int	p;

	p = 0;
	if (n >= 16)
	{
		p = ft_error_w(p, ft_putnbr_fd_hex(n / 16, fd, uppercase));
		if (p == -1)
			return (-1);
		p = ft_error_w(p, ft_putnbr_fd_hex(n % 16, fd, uppercase));
		if (p == -1)
			return (-1);
		return (p);
	}
	else
	{
		if (n < 10)
			return (ft_error_w(p, ft_putchar_fd(n + '0', fd)));
		else
		{
			if (uppercase)
				return (ft_error_w(p, ft_putchar_fd(n - 10 + 'A', fd)));
			else
				return (ft_error_w(p, ft_putchar_fd(n - 10 + 'a', fd)));
		}
	}
}
