/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 23:47:07 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/05/27 23:48:58 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_min(char *tab)
{
	int i;
	int min;

	i = 0;
	min = ft_max(tab);
	while(tab[i])
	{
		if (tab[i] < min)
			min = tab[i];
		i++;
	}
	return (min);
}
