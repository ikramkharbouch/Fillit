/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_matrix.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 00:25:56 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/05/19 00:39:08 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	push_matrix(char *buff, int i)
{
	t_node	*new;
	char	**temp;

	temp = asign_to_array(buff);
	if (!i)
		create_and_add(temp, NULL);
	else
	{
		new = ft_new_node(temp);
		create_and_add(temp, new);
	}
}
