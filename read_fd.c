/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_fd.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 16:52:32 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/05/29 00:18:10 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		add_tetro(t_node **head, char *buff)
{
	char	**temp;
	t_node	*new;

	temp = ft_strsplit(buff, '\n');
	if (!temp)
		return (0);
	new = ft_new_node(temp);
	if (!new)
	{
		ft_del_array(temp);
		ft_memdel((void **)&temp);
		return (0);
	}
	ft_node_push_back(head, new);
	return (1);
}

t_node	*read_fd(int fd)
{
	char	buff[BUF_SIZE + 1];
	t_node	*head;
	int		size;
	int		newline;

	head = NULL;
	newline = 0;
	while ((size = read(fd, buff, BUF_SIZE)) || newline)
	{
		buff[size] = '\0';
		newline = 0;
		if (size != 20 || !validate_tetro(buff) || !add_tetro(&head, buff))
		{
			del_tetris(&head);
			return (NULL);
		}
		size = read(fd, buff, 1);
		buff[size] = '\0';
		if (buff[0] == '\n')
			newline = 1;
		else if (buff[0] != '\0')
		{
			del_tetris(&head);
			return (NULL);
		}
	}
	return (head);
}
