/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_buff.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 17:40:13 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/05/20 18:09:38 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		validate_buff(char *buff)
{
	int i;
	int j;

	i = 0;
	j = 4;
	while (buff[i])
	{
		if (i == (int)(ft_strlen(buff) - 1) && buff[i] == '\n')
			return (1);
		if (buff[i] == '\n' && i == j)
			j += 5;
		else if (buff[i] == '\n' && i != j)
			break;
		i++;
	}
	return (0);
}

