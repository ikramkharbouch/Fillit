/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_connections.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 22:05:33 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/05/20 22:23:38 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		check_connections(char **str)
{
	int i;
	int	j;
	int	count;

	j = 0;
	count = 0;
	while (str[j])
	{
		i = 0;
		while (str[j][i])
		{
			if (str[j][i] == '#' && i + 1 < 4 && str[j][i + 1] == '#')
				count += 2;
			if (str[j][i] == '#' && j + 1 < 4 && str[j + 1][i] == '#')
				count += 2;
			i++;
		}
		j++;
	}
	return (count);
}
