/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 00:46:52 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/05/18 00:10:23 by ikrkharb         ###   ########.fr       */
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
	int		k;

	i = 0;
	j = 0;
	printf("buff is |%s|\n", buff);
	if (!(matrix = (char **)malloc(sizeof(char *) * 4)))
			return (NULL);
	while (i < 4)
	{
		matrix[i] = (char *)malloc(sizeof(char) * 4);
		k = 0;
		while ((j < 20 && buff[j] != '\n') && k < 4)
		{
			printf("buff[%d] == %c\n", j, buff[j]); 
			matrix[i][k] = buff[j];
			printf("matrix[%d][%d] = %c\n",i,  k, matrix[i][k]);
			k++;
			j++;
		}
		printf("matrix[%d] is |%s|\n",i ,matrix[i]);
		if (buff[j + 1])
			j += 1;
		matrix[i][k] = '\0';
		i++;
	}
	matrix[i] = NULL;
	return (matrix);
}

void	fillit(int fd)
{
	char	buff[22];
	char	**test;

	while (read(fd, buff, 22))
	{
		buff[21] = '\0';
	}
	test = tetro_to_matrix(buff);
	ft_print_array(test, 1);
}
