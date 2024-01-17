/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarkaid <pmarkaid@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 10:54:48 by pmarkaid          #+#    #+#             */
/*   Updated: 2024/01/17 15:51:21 by pmarkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*load_buffer(int fd, char *remainder)
{
	ssize_t	bytes_read;
	size_t	remainder_len;
	char	buffer[BUFFER_SIZE];
	char	*new_buffer;

	bytes_read = read(fd, buffer, BUFFER_SIZE);
	while (bytes_read > 0)
	{
		remainder_len = ft_strlenc(remainder, '\0');
		new_buffer = malloc(sizeof(char) * (remainder_len + bytes_read + 1));
		if (!new_buffer)
			return (ft_free(&remainder));
		ft_memmove(new_buffer, remainder, remainder_len);
		ft_memmove(new_buffer + remainder_len, buffer, bytes_read);
		new_buffer[remainder_len + bytes_read] = '\0';
		free(remainder);
		remainder = new_buffer;
		if (ft_strchr(remainder, '\n') != NULL || bytes_read < BUFFER_SIZE)
			break ;
		bytes_read = read(fd, buffer, BUFFER_SIZE);
	}
	if (bytes_read == -1)
		return (ft_free(&remainder));
	return (remainder);
}

char	*parse_line(char *remainder)
{
	size_t	line_len;
	char	*newline;
	char	*line;

	if (!remainder)
		return (ft_free(&remainder));
	line_len = ft_strlenc(remainder, '\n');
	newline = ft_strchr(remainder, '\n');
	if (newline)
		line_len += 1;
	line = malloc(sizeof(char) * (line_len + 1));
	if (!line)
		return (NULL);
	ft_memmove(line, remainder, line_len);
	line[line_len] = '\0';
	return (line);
}

char	*update_remainder(char *remainder)
{
	char	*new_remainder;
	char	*newline;
	size_t	remainder_len;

	newline = ft_strchr(remainder, '\n');
	if (!newline)
		return (ft_free(&remainder));
	remainder_len = ft_strlenc(newline, '\0');
	new_remainder = malloc(sizeof(char) * (remainder_len + 1));
	if (!new_remainder)
		return (ft_free(&remainder));
	ft_memmove(new_remainder, newline + 1, remainder_len);
	free(remainder);
	return (new_remainder);
}

char	*get_next_line(int fd)
{
	static char	*remainder[4096];
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	remainder[fd] = load_buffer(fd, remainder[fd]);
	if (!remainder[fd] || *remainder[fd] == '\0')
		return (ft_free(&remainder[fd]));
	line = parse_line(remainder[fd]);
	if (!line)
		return (ft_free(&remainder[fd]));
	remainder[fd] = update_remainder(remainder[fd]);
	return (line);
}
