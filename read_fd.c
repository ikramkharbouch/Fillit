/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_fd.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 23:32:09 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/05/19 00:27:12 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	read_fd(int fd)
{
	char	buff[22];
	int		i;

	i = 0;
	while (read(fd, buff, 21))
	{
		buff[21] = '\0';
		printf("buff == |%s|\n", buff);
		push_matrix(buff, i);
		ft_strclr(buff);
	}
}
