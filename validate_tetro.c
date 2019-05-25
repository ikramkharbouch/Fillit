/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_tetro.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 20:59:04 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/05/24 21:25:02 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		last_check(char *buff, int i, int count)
{
	char	**temp;
	int		ret;

	temp = ft_strsplit(buff, '\n');
	if (i == 20 && count == 4 && check_connections(temp) >= 6)
		ret = 1;
	else
		ret = 0;
	ft_del_array(temp);
	ft_memdel((void **)&temp);
	return (ret);
}

int		validate_tetro(char *buff)
{
	int		i;
	int		j;
	int		count;

	i = 0;
	count = 0;
	j = 4;
	while (buff[i])
	{
		if ((i == j) && buff[i] == '\n')
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
	return (last_check(buff, i, count));
}
