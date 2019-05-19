/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_and_add.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 00:25:27 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/05/19 00:38:55 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	create_and_add(char **temp, t_node *new)
{
	t_node	*head;

	head = ft_new_node(temp);
	ft_node_push_back(&head, new);
}
