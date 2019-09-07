# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adstuder <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/09 22:44:12 by adstuder          #+#    #+#              #
#    Updated: 2018/04/12 17:43:40 by adstuder         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c \
		srcs/ft_swap.c

SRCO = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

HEADER = -I includes/

all: $(NAME)

$(NAME):
	gcc -c -Werror -Wall -Wextra $(HEADER) $(SRCS)
	ar rc libft.a $(SRCO)

clean: 
	rm -f $(SRCO)

fclean: clean
	rm -f $(NAME)

re: fclean all
