# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: scarrera <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/29 14:01:03 by scarrera          #+#    #+#              #
#    Updated: 2019/07/30 15:51:42 by scarrera         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = gcc -Wall -Werror -Wextra -o

NAME=bsq
SRCS= srcs/display.c srcs/main.c srcs/parser.c srcs/resolve.c lib/*.c
OBJ= $(FILENAMES: .c=.o)

all: $(NAME)

$(NAME):
	$(FLAGS) $(NAME) $(SRCS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
