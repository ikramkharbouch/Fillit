/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 22:52:54 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/05/19 22:36:34 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_node  *ft_new_node(char **array)
{
	t_node *node;
	int i;

	i = 0;
	if (!(node = (t_node *)malloc(sizeof(t_node))))
		return (NULL);
	if (array == NULL)
		node->content = NULL;
	if (!(node->content = (char **)malloc(sizeof(char *) * 4)))
	{
		ft_memdel((void **)&node);
		return (NULL);
	}
	while (i < 4)
	{
		if (!(node->content[i] = (char *)malloc(sizeof(char) * 4)))
		{
			ft_memdel((void **)&node);
			return (NULL);
		}
		node->content[i] = array[i];
		i++;
	}
	node->next = NULL;
	return (node);
}
