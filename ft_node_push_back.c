/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_node_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 00:17:22 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/05/19 00:39:24 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_node_push_back(t_node **alst, t_node *new)
{
	t_node *current;

	current = *alst;
	if (*alst)
	{
		while (current->next)
		{
			current = current->next;
		}
		new->next = current->next;
		current->next = new;
	}
	else
	{
		new->next = current ;
		current = new;
	}
}
