/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarkaid <pmarkaid@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 08:27:43 by pmarkaid          #+#    #+#             */
/*   Updated: 2023/11/09 10:50:27 by pmarkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f'
		|| c == '\r' || c == '\12');
}

int	ft_atoi(const char *str)
{
	int	i;
	int long nb;
	int	neg;

	i = 0;
	nb = 0;
	neg = 1;
	while (str[i] && (ft_isspace(str[i])))
		i++;
	if (str[i] == '-')
		neg = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] && ft_isdigit(str[i]))
		{
		nb = 10 * nb + str[i++] - '0';
		if(nb < 0 && neg < 0)
			return(0);
		else if (nb < 0 && neg > 0)
			return (-1);
		}
	return (nb * neg);
}
