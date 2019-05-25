/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_fd.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 23:32:09 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/05/24 21:25:40 by ikrkharb         ###   ########.fr       */
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

void	verify_fd(t_node **head, char *buff, int size)
{
	if (size != 20)
	{
		ft_putstr("error\n");
		exit(1);
	}
	if (!validate_tetro(buff))
	{
		ft_putstr("error\n");
		del_tetris(head);
		exit(1);
	}
}

t_node	*read_fd(int fd)
{
	char	buff[BUF_SIZE + 1];
	t_node	*head;
	int		size;
	int		newline;

	head = NULL;
	while ((size = read(fd, buff, BUF_SIZE)) || newline)
	{
		newline = 0;
		buff[size] = '\0';
		verify_fd(&head, buff, size);
		if (add_tetro(&head, buff) == -1)
			return (NULL);
		size = read(fd, buff, 1);
		buff[size] = '\0';
		if (buff[0] == '\n')
			newline = 1;
		else if (buff[0] != '\0')
		{
			ft_putstr("error\n");
			exit(1);
		}
	}
	return (head);
}
