/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del_tetris.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 01:35:19 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/05/20 01:35:55 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	del_tetris(t_node **head)
{
	t_node	*tmp;
	t_node	*next;

	tmp = *head;
	while (tmp)
	{
		next = tmp->next;
		ft_del_array(tmp->content);
		ft_memdel((void **)&(tmp->content));
		ft_memdel((void **)&tmp);
		tmp = next;
	}
}
