/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 23:07:32 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/05/29 00:18:31 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	usage(char *filename)
{
	ft_putstr("usage: ");
	ft_putstr(filename);
	ft_putstr(" input_file\n");
}

int		main(int argc, char *argv[])
{
	int		fd;
	t_node	*head;

	if (argc != 2)
	{
		usage(argv[0]);
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	head = read_fd(fd);
	close(fd);
	if (!head || list_size(head) > 26)
	{
		ft_putstr("error\n");
		del_tetris(&head);
		return (1);
	}
	solver(head);
	print_tetris(head);
	print_coords(head);
	del_tetris(&head);
	return (0);
}
