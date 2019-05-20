/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_fd.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 23:32:09 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/05/20 00:51:23 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		add_tetro(t_node **head, char *buff)
{
	char	**temp;
	t_node	*new;

	temp = ft_strsplit(buff, '\n');
	if (!temp)
		return (-1);
	new = ft_new_node(temp);
	if (!new)
	{
		ft_del_array(temp);
		ft_memdel((void **)&temp);
		return (-1);
	}
	ft_node_push_back(head, new);
	return (1);
}

t_node	*read_fd(int fd)
{
	char	buff[BUF_SIZE + 1];
	t_node	*head;
	int		n;

	head = NULL;
	while ((n = read(fd, buff, BUF_SIZE)))
	{
		buff[n] = '\0';
		if (add_tetro(&head, buff) == -1)
		   return (NULL);
	}
	return (head);
}
