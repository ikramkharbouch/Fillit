# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/07 12:58:57 by ikrkharb          #+#    #+#              #
#    Updated: 2019/05/19 21:07:40 by ikrkharb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = library.a

FLAGS = -Wall -Wextra -Werror

SRCS = $(shell find . -maxdepth 1 -type f | grep -E "\.c")

OBJ = $(SRCS:.c=.o)

$(NAME): $(OBJ) fillit.h
	@gcc $(FLAGS) -c $(SRCS)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

all: $(NAME)

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
