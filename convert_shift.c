/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_shift.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 16:58:14 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/05/29 23:39:24 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**ft_shift(char **tab);

static void	_convert_shift(t_node *node, int order)
{
	int i;
	int j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (node->content[i][j] == '#')
				node->content[i][j] = 'A' + order;
			j++;
		}
		i++;
	}
}

void		convert_shift(t_node *head)
{
	int	i;

	i = 0;
	char	**temp;
	while (head)
	{
		_convert_shift(head, i++);
		temp = ft_shift(head->content);
		ft_print_array(temp, 1);
		head = head->next;
	}
}
