# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egualand <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/05 16:28:55 by egualand          #+#    #+#              #
#    Updated: 2023/11/09 14:31:16 by egualand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_printf.c ft_printf_utils.c ft_put/ft_putnbr_base.c

OBJS = $(SRCS:.c=.o)

INCLUDES = ./

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

NAME = libftprintf.a

all: $(NAME)

$(NAME): $(HEADER) $(OBJS)
	$(CC) $(CFLAGS) -I $(INCLUDES) -c $(SRCS)
	ar rcs $(NAME) $(OBJS)
	ranlib $(NAME)

main:
	$(CC) $(SRCS) ft_printf.h main.c

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
