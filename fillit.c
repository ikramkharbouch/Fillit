/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 00:46:52 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/05/17 23:28:54 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

/*void	create_fill_node(char **tableau)
{
	t_list	*node;
	char	**tableau;
	int 	i;

	tableau = (char **)malloc(sizeof(char *) * 1)
	node = ft_lstnew(*tableau, 4);

}*/
char	**tetro_to_matrix(char *buff)
{
	char	**matrix;
	int		i;
	int		j;

	i = 0;
	j = 0;
	matrix = (char **)malloc(sizeof(char *) * 4);
	while (i < 4)
	{
		matrix[i] = (char *)malloc(sizeof(char) * 4);
		if (buff[j + 1])
			j += 1;
		while (j < 20 && buff[j] != '\n')
		{
			matrix[i][j] = buff[j];
			j++;
		}
		matrix[i][j] = '\0';
		i++;
	}
	return (matrix);
}

void	fillit(int fd)
{
	char	buff[21];
	int		i;

	i = 0;
	while (read(fd, buff, 20))
	{
		i++;
		buff[20] = '\0';
		printf("%s", buff);
		ft_print_array(tetro_to_matrix(buff), 1);
	}
}
