# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adstuder <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/10 18:33:12 by adstuder          #+#    #+#              #
#    Updated: 2018/04/12 18:37:32 by adstuder         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRCS = main.c

SRCO = main.o

all: $(NAME)

$(NAME):
	gcc -c -Werror -Wextra -Wall $(SRCS)
	gcc -Werror -Wextra -Wall $(SRCO) -o $(NAME)

clean:
	rm -f $(SRCO)

fclean: clean
	rm -f $(NAME)

re: fclean all
