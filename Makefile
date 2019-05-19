# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/19 00:27:17 by ikrkharb          #+#    #+#              #
#    Updated: 2019/05/19 00:38:35 by ikrkharb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 	fillit.a

CC = gcc -Wall -Wextra -Werror

SRCS = $(shell find . -maxdepth 1 -type f | grep -E "\.c")

OBJ = $(SRCS:.c=.o)

$(NAME) : $(OBJ) fillit.h
	@$(CC) -c $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

all : $(NAME)

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
