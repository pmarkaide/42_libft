# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pmarkaid <pmarkaid@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/24 12:10:27 by pmarkaid          #+#    #+#              #
#    Updated: 2023/10/25 12:32:36 by pmarkaid         ###   ########.fr        #
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
	ft_islower.c

OBJS = $(SRCS:.c=.o)

libft.a: $(OBJS)
	ar rcs libft.a $(OBJS)

%.o: %.c
	cc -Wall -Wextra -Werror -c $< -o $@

all: libft.a

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f libft.a

re: fclean all

.PHONY: all clean fclean re