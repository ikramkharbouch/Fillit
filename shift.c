/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shift.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 20:40:04 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/05/29 23:40:26 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**ft_shift_length(char **tab, int limit)
{
	int i;
	int j;

	i = limit;
	while (i < 4)
	{
		j = 0;
		while (tab[i][j])
		{
			if (ft_isalpha(tab[i][j]))
			{
				tab[i - limit][j] = tab[i][j];
				tab[i][j] = '.';
			}
			j++;
		}
		i++;
	}
	return (tab);
}

char	**ft_shift_width(char **tab, int limit)
{
	int i;
	int j;

	i = 0;
	while (i < 4)
	{
		j = limit;
		while (tab[i][j])
		{
			if (ft_isalpha(tab[i][j]))
			{
				tab[i][j - limit] = tab[i][j];
				tab[i][j] = '.';
			}
			j++;
		}
		i++;
	}
	return (tab);
}

int	ft_tetro_width(char	**tab)
{
	int i;
	int j;
	int limit;

	i = 0;
	limit = 3;
	while (i < 4)
	{
		j = 0;
		while (tab[i][j])
		{
			if (ft_isalpha(tab[i][j]) && j < limit)
				limit = j;
			j++;
		}
		i++;
	}
	return (limit);
}

int	ft_tetro_length(char **tab)
{
	int i;
	int j;

	i = 0;
	while (tab[i] && i < 4)
	{
		j = 0;
		while (tab[i][j])
		{
			if(ft_isalpha(tab[i][j]))
				return (i);
			j++;
		}
		i++;
	}
	return (0);
}

char	**ft_shift(char	**tab)
{
	int i;
	int w;
	int l;

	i = 0;
	while (tab[i])
	{
		l = ft_tetro_length(&tab[i]);
		w = ft_tetro_width(&tab[i]);
		if (l != 0)
			ft_shift_length(&tab[i], l);
		if (w != 0)
			ft_shift_width(&tab[i], w);
		i += 4;
	}
	return (tab);
}
