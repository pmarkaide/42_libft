/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarkaid <pmarkaid@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 09:07:18 by pmarkaid          #+#    #+#             */
/*   Updated: 2024/02/18 14:45:08 by pmarkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**For the "C" locale, white-space characters are any of:
**' '	(0x20)	space (SPC)
**'\t'	(0x09)	horizontal tab (TAB)
**'\n'	(0x0a)	newline (LF)
**'\v'	(0x0b)	vertical tab (VT)
**'\f'	(0x0c)	feed (FF) == '\12'
**'\r'	(0x0d)	carriage return (CR)
**
** Another way to return the same result is:
** return ((9 <= c && c <= 13) || c == 32);
*/

int	ft_isspace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f'
		|| c == '\r' || c == '\12');
}
