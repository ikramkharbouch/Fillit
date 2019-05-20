/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 15:50:35 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/05/20 17:48:23 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(void)
{
	t_node	*head;
	int		fd;

	fd = open("input", O_RDONLY);
	head = read_fd(fd);
	close(fd);
	if (!head)
		return (1);
	print_tetris(head);
	del_tetris(&head);
	return (0);
}
