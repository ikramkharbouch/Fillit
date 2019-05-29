/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 22:52:54 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/05/28 22:39:50 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_node	*ft_new_node(char **content)
{
	t_node	*node;
	int		i;
	int		j;
	int		k;

	if (!(node = (t_node *)ft_memalloc(sizeof(t_node))))
		return (NULL);
	node->content = content;
	i = 0;
	k = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (content[i][j] == '#')
			{
				node->tab[k][0] = i;
				node->tab[k][1] = j;
				k++;
			}
			j++;
		}
		i++;
	}
	node->next = NULL;
	return (node);
}
