/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarkaid <pmarkaid@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:33:43 by pmarkaid          #+#    #+#             */
/*   Updated: 2023/10/24 12:33:34 by pmarkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

// int main(int argc, char const *argv[])
// {
//     printf("%d\n", ft_isalpha('A')); // This will print 0
//     printf("%d\n", ft_isalpha('z')); // This will print 0
//     printf("%d\n", ft_isalpha(9)); // This will print 0

//     return (0);
// }
