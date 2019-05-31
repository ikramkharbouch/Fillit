/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 17:06:23 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/05/29 23:40:34 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <math.h>

int		map_size(int n)
{
	return (sqrt((double)(n * 4)));
}

char	**create_map(int size)
{
	char	**map;
	int		i;

	map = (char **)ft_memalloc(sizeof(char *) * (size + 1));
	i = 0;
	while (i < size)
	{
		map[i] = ft_strnew(size);
		i++;
	}
	map[i] = NULL;
	return (map);
}

/*int		tetris_solver(char **map, t_node *head)
{
	int	i;

	i = 0;
	while (head)
	{
		if (tetris_solver(map, head))
		{

		}
		i++;	
		head = head->next;
	}
}*/

char **	solver(t_node *head)
{
	char	**map;
	int		size;
	
	convert_shift(head);
	size = map_size(list_size(head));
	printf("size: %d\n", size);
	map = create_map(size);
	return (map);
}
