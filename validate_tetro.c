/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_tetro.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 20:59:04 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/05/27 16:56:34 by ikrkharb         ###   ########.fr       */
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

int		last_check(char *buff, int i, int count, int value)
{
	char	**temp;
	int		ret;

	if (value)
		return (0);
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
	int		value;

	i = 0;
	count = 0;
	j = 4;
	value = 0;
	while (buff[i])
	{
		if ((i == j) && buff[i] == '\n')
		{
			j += 5;
			i++;
			continue;
		}
		if (buff[i] != '.' && buff[i] != '#')
		{
			value = 1;
			break ;
		}
		if (buff[i] == '#')
			count++;
		i++;
	}
	return (last_check(buff, i, count, value));
}
