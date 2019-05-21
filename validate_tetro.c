/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_buff.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 18:34:26 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/05/20 22:54:52 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		validate_tetro(char *buff)
{
	int i;
	int j;
	int	count;

	i = 0;
	count = 0;
	j = 4;
	while (buff[i])
	{
		if ((i == 20 || i == j) && buff[i] == '\n')
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
	if (i == 21 && buff[20] == '\n' && count == 4)
		return (1);
	return (0);
}

