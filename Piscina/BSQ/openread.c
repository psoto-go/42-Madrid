/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparejo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 12:12:43 by jparejo-          #+#    #+#             */
/*   Updated: 2020/12/16 21:39:28 by jparejo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int			sizefile(int fd)
{
	int		num;
	char	*ptr;

	num = 0;
	while (read(fd, &ptr, 1))
		num++;
	return (num);
}

char		*readfile(int fd, int size)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = malloc((size + 1) * sizeof(char));
	while (read(fd, &ptr[i], 1))
		i++;
	ptr[i] = '\0';
	return (ptr);
}

int			openfile(char *file)
{
	int fd;

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		write(1, "FILE ERROR\n", 11);
		return (-1);
	}
	else
		return (fd);
}
