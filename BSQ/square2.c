/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparejo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 21:42:47 by jparejo-          #+#    #+#             */
/*   Updated: 2020/12/16 21:43:33 by jparejo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library.h"
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int			minimum(int **c, int i, int j)
{
	int m;

	if (c[i - 1][j - 1] <= c[i][j - 1]
	&& c[i - 1][j - 1] <= c[i - 1][j])
		m = c[i - 1][j - 1];
	else if (c[i][j - 1] <= c[i - 1][j - 1]
	&& c[i][j - 1] <= c[i - 1][j])
		m = c[i][j - 1];
	else
		m = c[i - 1][j];
	m = m + 1;
	return (m);
}

int			**maxsquare(int **c, int r, int l)
{
	int	i;
	int j;
	int min;

	i = 1;
	j = 1;
	while (i < r)
	{
		while (j < l)
		{
			min = minimum(c, i, j);
			if (c[i][j] != 0)
				c[i][j] = min;
			j++;
		}
		j = 1;
		i++;
	}
	return (c);
}

int			*solution(int **n, int r, int l)
{
	int	i;
	int j;
	int *max;

	max = malloc(3 * sizeof(int));
	i = 0;
	j = 0;
	max[0] = 0;
	while (i < r)
	{
		while (j < l)
		{
			if (n[i][j] > max[0])
			{
				max[0] = n[i][j];
				max[1] = j;
				max[2] = i;
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (max);
}

int			**final(int **n, int *max)
{
	int x;
	int y;
	int i;
	int cont_x;
	int cont_y;

	cont_x = 0;
	cont_y = 0;
	i = max[0];
	x = max[1];
	y = max[2];
	while (cont_y < i)
	{
		while (cont_x < i)
		{
			n[y][x] = -1;
			x--;
			cont_x++;
		}
		cont_x = 0;
		cont_y++;
		x = max[1];
		y--;
	}
	return (n);
}

void		writemap(int **n, int r, int l, char *val)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while (i < r)
	{
		while (j < l)
		{
			if (n[i][j] == 0)
				write(1, &val[1], 1);
			else if (n[i][j] == -1)
				write(1, &val[2], 1);
			else
				write(1, &val[0], 1);
			j++;
		}
		write(1, "\n", 1);
		j = 0;
		i++;
	}
}
