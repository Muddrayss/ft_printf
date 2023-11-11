# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egualand <egualand@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/05 16:28:55 by egualand          #+#    #+#              #
#    Updated: 2023/11/11 14:03:13 by egualand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FTPUT_DIR	=	ft_put/
FTPUT		=	ft_putchar ft_putnbr_base ft_putnbr_uint ft_putnbr ft_putstr

FTSTR_DIR	=	ft_str/
FTSTR		=	ft_strlen

SRC_FILES	=	ft_printf ft_printf_utils
SRC_FILES	+=	$(addprefix $(FTPUT_DIR),$(FTPUT))
SRC_FILES	+=	$(addprefix $(FTSTR_DIR),$(FTSTR))

SRCS 		= 	$(addsuffix .c, $(SRC_FILES))
OBJS 		= 	$(SRCS:.c=.o)

INCLUDES 	= 	./

CC 			= 	cc
CFLAGS 		= 	-Wall -Wextra -Werror
RM 			= 	rm -f

NAME 		= 	libftprintf.a

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	ranlib $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -I $(INCLUDES) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
