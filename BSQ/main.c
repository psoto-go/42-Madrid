/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparejo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 15:26:47 by jparejo-          #+#    #+#             */
/*   Updated: 2020/12/16 21:47:04 by jparejo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void		resolve(char *file)
{
	int			**num;
	int			*max;
	char		*val;
	int			row;
	int			lon;

	val = caracteres(file);
	row = cuentafilas(file);
	lon = row_cmp(file);
	num = numbersmap(file, row, lon, val);
	num = maxsquare(num, row, lon);
	max = solution(num, row, lon);
	num = final(num, max);
	writemap(num, row, lon, val);
}

void		fileor(char *name)
{
	int		fd;
	int		fs;
	char	*file;

	fd = openfile(name);
	fs = sizefile(fd);
	close(fd);
	fd = openfile(name);
	file = readfile(fd, fs);
	close(fd);
	parameters(file);
	resolve(file);
}

int			main(int argc, char **argv)
{
	int n;

	if (argc < 2)
	{
		write(1, "Invalid arguments\n", 18);
		exit(0);
	}
	n = 1;
	while (argv[n] != '\0')
	{
		fileor(argv[n]);
		write(1, "\n", 1);
		n++;
	}
}
