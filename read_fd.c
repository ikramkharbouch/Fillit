/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_fd.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 23:32:09 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/05/19 23:03:10 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	read_fd(int fd)
{
	char	buff[22];
	char	**temp;
	t_node	*node;
	t_node *new;
	t_node	*next;
	int		i;

	i = 0;
	while (read(fd, buff, 21))
	{
		buff[21] = '\0';
		temp = ft_strsplit(buff, '\n');
		if (i == 0)
			node = ft_new_node(temp);
		else
		{
			new = ft_new_node(temp);
			ft_node_push_back(&node, new);
		}
		ft_print_array(temp, 1);
		i++;
	}
	while (node)
	{
		printf("deleting nodes\n");
		next = node->next;
		ft_memdel((void **)&node);
		node = next;
	}
	ft_memdel((void **)temp);
}
