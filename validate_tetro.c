/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_tetro.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 20:59:04 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/05/22 00:54:54 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		validate_tetro(char *buff, int first)
{
	int i;
	int j;
	int	count;

	i = 0;
	count = 0;
	j = 5;
	while (buff[i])
	{
		if (first)
		{
			j--;
			if (i == j && buff[i] == '\n');
		}
		else
			if ((i == 0 || i == j) && buff[i] == '\n')
			{
				j += 5;
				i++;
				continue;
			}
		if (buff[i] != '.' && buff[i] != '#')
			break ;
		if (buff[i] == '#')
			count++;
		i++;
	}
	if (i == 21 && count == 4)
		return (1);
	return (0);
}

