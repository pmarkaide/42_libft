/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarkaid <pmarkaid@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:22:12 by pmarkaid          #+#    #+#             */
/*   Updated: 2024/01/17 14:47:21 by pmarkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_error_w(int print_count, int write_return)
{
	if (print_count < 0 || write_return < 0)
		return (-1);
	else
		return (print_count + write_return);
}

int	ft_putformat(char specifier, va_list args)
{
	int	p;

	p = 0;
	if (specifier == '%')
		p = ft_error_w(p, ft_putchar_fd('%', 1));
	else if (specifier == 'c')
		p = ft_error_w(p, ft_putchar_fd(va_arg(args, int), 1));
	else if (specifier == 's')
		p = ft_error_w(p, ft_putstr_fd(va_arg(args, char *), 1));
	else if (specifier == 'd' || specifier == 'i')
		p = ft_error_w(p, ft_putnbr_fd(va_arg(args, int), 1));
	else if (specifier == 'u')
		p = ft_error_w(p, ft_putnbr_fd_uns(va_arg(args, unsigned long), 1));
	else if (specifier == 'x')
		p = ft_error_w(p, ft_putnbr_fd_hex(va_arg(args, unsigned int), 1, 0));
	else if (specifier == 'X')
		p = ft_error_w(p, ft_putnbr_fd_hex(va_arg(args, unsigned int), 1, 1));
	else if (specifier == 'p')
		p = ft_error_w(p, ft_putptr_fd(va_arg(args, unsigned long), 1));
	if (p == -1)
		return (-1);
	return (p);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		p;

	va_start(args, format);
	p = 0;
	while (*format)
	{
		if (*format == '%')
		{
			p = ft_error_w(p, ft_putformat(*(++format), args));
			if (p == -1)
				return (-1);
		}
		else
		{
			p = ft_error_w(p, write(1, format, 1));
			if (p == -1)
				return (-1);
		}
		format++;
	}
	va_end(args);
	return (p);
}
