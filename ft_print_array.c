/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_array.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarkaid <pmarkaid@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 14:56:42 by pmarkaid          #+#    #+#             */
/*   Updated: 2024/02/18 15:51:50 by pmarkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_array(char **array)
{
	size_t	i;

	i = 0;
	ft_printf("printing array");
	while (array[i] != NULL)
		ft_printf("%s\n", array[i++]);
}
