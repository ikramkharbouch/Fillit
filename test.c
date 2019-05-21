/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 21:20:52 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/05/21 00:36:00 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		check_connections(char **str);

int		main(int argc, char *argv[])
{
	(void)argc;
	char	buff[BUF_SIZE + 1];
	char	**temp;
	int fd;
	int n;

	fd = open(argv[1], O_RDONLY);
	while ((n = read(fd, buff, BUF_SIZE)))
	{
		buff[n] = '\0';
		if (!(temp = ft_strsplit(buff, '\n')))
			return (1);
		if (validate_tetro(buff))
		{
			printf("connections = %d\n", check_connections(temp));
		}
		else
			printf("not valid\n");
		ft_del_array(temp);
	}
	return (0);
}
