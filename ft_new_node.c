/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 22:52:54 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/05/20 00:34:40 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_node	*ft_new_node(char **content)
{
	t_node	*node;

	if (!(node = (t_node *)ft_memalloc(sizeof(t_node))))
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
