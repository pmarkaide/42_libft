/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarkaid <pmarkaid@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 12:08:37 by pmarkaid          #+#    #+#             */
/*   Updated: 2023/10/27 09:52:56 by pmarkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

#ifndef LIBFT_H
#define LIBFT_H

// Own functions
int	ft_islower(int c);
int	ft_isupper(int c);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strcpy(char *dest, const char *src);

// Part 1
int ft_isalpha(int c);
int	ft_isdigit(int c);
int ft_isalnum(int c);
size_t	ft_strlen(const char *s);
int	ft_toupper(int c);
int	ft_tolower(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
void	*ft_memset(void	*b, int	c, size_t	len);
void	ft_bzero(void *s, size_t n);
char *ft_strjoin(char const *s1, char const *s2);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);


// Part 2

// Bonus

#endif