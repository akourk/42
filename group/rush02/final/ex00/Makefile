# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lkrief <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/28 20:13:11 by lkrief            #+#    #+#              #
#    Updated: 2019/07/28 20:20:09 by lkrief           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2

LIBNAME = rush02

SRC = ft_findsizes.c ft_str.c ft_rush_test.c test_rush.c test_rush_good.c 

MAIN = main.c

all: $(NAME)

$(NAME):
	gcc -c -Wall -Werror -Wextra $(SRC)
	ar rc lib$(LIBNAME).a *.o
	gcc -Wall -Werror -Wextra -L. -l$(LIBNAME) $(MAIN) -o $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f lib$(LIBNAME).a
	/bin/rm -f $(NAME)

re: fclean all
