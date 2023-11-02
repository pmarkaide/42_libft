# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pmarkaid <pmarkaid@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/24 12:10:27 by pmarkaid          #+#    #+#              #
#    Updated: 2023/11/02 15:26:50 by pmarkaid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = \
	ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_isascii.c \
	ft_isupper.c \
	ft_islower.c \
	ft_memset.c \
	ft_bzero.c \
	ft_strcat.c  \
	ft_strcpy.c \
	ft_strjoin.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_atoi.c \
	ft_isspace.c \
	ft_strdup.c \
	ft_calloc.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_substr.c \
	ft_strtrim.c \
	ft_itoa.c \
	ft_numlen.c \
	ft_striteri.c \
	ft_strmapi.c \
	ft_strtrimstr.c

OBJS = $(SRCS:.c=.o)

INCLUDES = .

all: libft.a

libft.a: $(OBJS)
	ar rcs libft.a $(OBJS)

%.o: %.c
	cc -Wall -Wextra -Werror -I$(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f libft.a

re: fclean all

.PHONY: all clean fclean re