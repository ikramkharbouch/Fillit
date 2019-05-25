/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   place_tetros.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 19:10:21 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/05/25 23:50:35 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	place_tetros(t_node *head)
{
	int i;
	int j;
	int min_i;
	int min_j;
	int	max_i;
	int max_j;

	while (head)
	{
		min_i = 5;
		min_j = 5;
		max_i = -1;
		max_j = -1;
		i = 0;
		while (i < 4)
		{
			j = 0;
			while (j < 4)
			{
				if (head->content[i][j] == '#')
				{
					min_j = min_j > j ? j : min_j;
					max_j = max_j < j ? j : max_j;
					min_i = min_i > i ? i : min_i;
					max_i = max_i < i ? i : max_i;
				}
				j++;
			}
			i++;
		}
		i = min_i - 1;
		while (++i <= max_i)
		{
			j = min_j - 1;
			while (++j <= max_j)
				ft_putchar(head->content[i][j]);
			ft_putchar('\n');
		}
		head = head->next;
	}
}	
