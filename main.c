/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 23:07:32 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/05/21 23:38:46 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		check_connections(char **str);

int		main(int argc, char *argv[])
{
	char	buff[BUF_SIZE + 1];
	char	**temp;
	int fd;
	int n;

	fd = open(argv[1], O_RDONLY);
	if (argc != 2)
	{
		ft_putstr("usage: ");
		ft_putstr(argv[0]);
		ft_putstr(" input_file\n");
		return (0);
	}

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
