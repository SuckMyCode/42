/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gakles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/18 11:59:30 by gakles            #+#    #+#             */
/*   Updated: 2015/09/18 13:36:34 by gakles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <fcntl.h>
#include <errno.h>
#include <unistd.h>
#include "ft.h"

#define BUF_SIZE 10

int		cat_error(int fd)
{
	if (fd == -1)
	{
		ft_putstr("Open failed\n");
		return (0);
	}
	if (close(fd) == -1)
	{
		ft_putstr("Close failed\n");
		return (0);
	}
	return (0);
}


int		main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	if (argc < 2)
	{
		ft_putstr("Missing file name\n");
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	cat_error(fd);
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	cat_error(fd);
	return (0);
}
