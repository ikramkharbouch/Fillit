# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/07 12:58:57 by ikrkharb          #+#    #+#              #
#    Updated: 2019/05/20 22:53:02 by ikrkharb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

FLAGS = -Wall -Wextra -Werror

SRCS = $(shell find . -maxdepth 1 -type f | grep -e "\.c$$")

OBJ = $(SRCS:.c=.o)

LIBFT = "libft/libft.a"

$(NAME): $(OBJ) fillit.h
	@gcc $(FLAGS) -c $(SRCS)
	@gcc $(FLAGS) $(OBJ) $(LIBFT) -o $(NAME)

all: $(NAME)

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
