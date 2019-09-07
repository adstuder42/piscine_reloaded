/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adstuder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 21:04:03 by adstuder          #+#    #+#             */
/*   Updated: 2018/04/12 21:19:05 by adstuder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

int		main(int argc, char **argv)
{
	int		fd;
	int		retre;
	char	buf;

	if (argc < 2)
	{
		write(1, "File name missing.\n", 19);
		return (0);
	}
	if (argc > 2)
	{
		write(1, "Too many arguments.\n", 20);
		return (0);
	}
	fd = open(argv[1], O_RDWR);
	if (fd == -1)
		return (1);
	while ((retre = read(fd, &buf, 1)) > 0)
		write(1, &buf, retre);
	if (close(fd) == -1)
		return (1);
	return (0);
}
