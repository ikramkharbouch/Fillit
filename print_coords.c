/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_coords.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 20:52:09 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/05/27 20:58:21 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		print_coords(t_node *head)
{
	int i;

	i = 0;
	while (head)
	{
		i = 0;
		while (i < 4)
		{
			printf("x = %d\ny = %d\n", head->tab[i][0], head->tab[i][1]);
			i++;
		}
		printf("--------------------------------\n");
		head = head->next;
	}
}
