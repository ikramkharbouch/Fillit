/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   asign_to_array.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 22:54:09 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/05/19 00:22:31 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char    **asign_to_array(char *buff)
{
	char    **matrice;
	int     i;
	int     j;
	int     k;

	i = 0;
	k = 0;
	matrice = (char **)malloc(sizeof(char *) * 4);
	while (i < 4)
	{
		matrice[i] = (char *)malloc(sizeof(char) * 4);
		j = 0;
		while (j < 4)
		{
			matrice[i][j] = buff[k];
			k++;
			j++;
		}
		if (buff[j + 1])
			j += 1;
		matrice[i][j] = '\0';
		i++;
	}
	matrice[i] = NULL;
	return (matrice);
}
