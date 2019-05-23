/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 23:07:32 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/05/23 00:47:53 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		check_connections(char **str);

int		main(int argc, char *argv[])
{
	int fd;
	t_node	*head;

	fd = open(argv[1], O_RDONLY);
	if (argc != 2)
	{
		ft_putstr("usage: ");
		ft_putstr(argv[0]);
		ft_putstr(" input_file\n");
		return (0);
	}
	head = read_fd(fd);
	print_tetris(head);
	if (head)
		del_tetris(&head);
	return (0);
}
