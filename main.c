/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 15:50:35 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/05/20 00:53:01 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	print_tetris(t_node *head)
{
	while (head)
	{
		ft_print_array(head->content, 1);
		ft_putchar('\n');
		head = head->next;
	}
}

void	del_tetris(t_node **head)
{
	t_node	*tmp;
	t_node	*next;

	tmp = *head;
	while (tmp)
	{
		next = tmp->next;
		ft_del_array(tmp->content);
		ft_memdel((void **)&(tmp->content));
		ft_memdel((void **)&tmp);
		tmp = next;
	}
}

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
