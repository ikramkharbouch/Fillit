/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 00:48:00 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/05/29 22:47:16 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# define BUF_SIZE 20

# include <fcntl.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"

typedef struct			s_node
{
	char				**content;
	char				tab[4][2];
	struct s_node		*next;
}						t_node;

t_node					*read_fd(int fd);
t_node					*ft_new_node(char **array);
void					ft_node_push_back(t_node **alst, t_node *new);
void					ft_print_node(t_node *node);
void					del_tetris(t_node **head);
void					print_tetris(t_node *head);
int						validate_tetro(char *buff);
int						list_size(t_node *head);
char **					solver(t_node *head);
void					convert_shift(t_node *node);
void					print_coords(t_node *head);

#endif
