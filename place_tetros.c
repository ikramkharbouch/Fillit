/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   place_tetros.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 19:10:21 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/05/24 23:58:36 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	place_tetros(t_node *head)
{
	char	***temp;
	int		length;
	int		i;

	length = list_size(head);
	if (!(temp = (char ***)malloc(sizeof(char *) * (length + 1))))
		exit(1);
	i = 0;
	while (head)
	{
		temp[i] = head->content;
		ft_print_array(temp[i], 0);
		head = head->next;
		i++;
	}
	ft_del_array(*temp);
	ft_memdel((void **)&temp);
}
	
