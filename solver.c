/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 17:06:23 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/05/28 22:40:13 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	solver(t_node *head)
{
	int i;

	i = 0;
	while (head)
	{
		convert_shift(head,i);
		head = head->next;
		i++;
	}
}
