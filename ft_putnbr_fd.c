/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarkaid <pmarkaid@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 10:05:45 by pmarkaid          #+#    #+#             */
/*   Updated: 2024/01/17 14:39:10 by pmarkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_fd(int n, int fd)
{
	int	p;

	p = 0;
	if (n == -2147483648)
		return (ft_error_w(p, write(fd, "-2147483648", 11)));
	if (n < 0)
	{
		p = ft_error_w(p, ft_putchar_fd('-', fd));
		if (p == -1)
			return (-1);
		n = -n;
	}
	if (n >= 10)
	{
		p = ft_error_w(p, ft_putnbr_fd(n / 10, fd));
		if (p == -1)
			return (-1);
	}
	p = ft_error_w(p, ft_putchar_fd(n % 10 + '0', fd));
	if (p == -1)
		return (-1);
	return (p);
}
