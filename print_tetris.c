/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_tetris.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 01:36:14 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/05/20 01:36:32 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	print_tetris(t_node *head)
{
	while (head)
	{
		ft_print_array(head->content, 1);
		ft_putchar('\n');
		head = head->next;
	}
}
