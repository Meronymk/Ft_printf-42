# ************************************************************************** #
#                                                                            #
#                                                        :::      ::::::::   #
#   Makefile                                           :+:      :+:    :+:   #
#                                                    +:+ +:+         +:+     #
#   By: krochefo <krochefo@student.42quebec.com    +#+  +:+       +#+        #
#                                                +#+#+#+#+#+   +#+           #
#   Created: 2022/03/30 12:27:16 by krochefo          #+#    #+#             #
#   Updated: 2022/04/06 14:12:48 by krochefo         ###   ########.fr       #
#                                                                            #
# ************************************************************************** #


SRCS = ft_printf.c ft_hexa.c ft_intdec.c ft_ptr.c ft_putchar.c ft_putstr.c \
		ft_specifier.c ft_unsigned.c ft_itoa.c ft_strdup.c \
		ft_memset.c ft_strlen.c ft_calloc.c

OBJS = $(SRCS:.c=.o)

CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

LIBAR = ar rcs

all: $(NAME)

$(NAME): $(OBJS)
	$(LIBAR) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re: fclean all