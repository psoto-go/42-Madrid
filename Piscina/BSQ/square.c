/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparejo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 13:20:02 by jparejo-          #+#    #+#             */
/*   Updated: 2020/12/16 21:44:55 by jparejo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library.h"
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

char		**savebuffer(char *c, char **bf, int nu)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (c[nu] != '\0')
	{
		while (c[nu] != '\n')
		{
			bf[i][j] = c[nu];
			j++;
			nu++;
		}
		nu++;
		i++;
		j = 0;
	}
	return (bf);
}

char		**deleteinfo(char *c, int r, int l)
{
	int		n;
	int		i;
	int		j;
	char	**buff;

	n = 0;
	i = 0;
	j = 0;
	buff = malloc(r * sizeof(char));
	while (i < r)
	{
		buff[i] = malloc(l * sizeof(char));
		i++;
	}
	while (c[n] != '\n')
	{
		n++;
	}
	n++;
	buff = savebuffer(c, buff, n);
	return (buff);
}

int			**numbers(char *c, int **bf, int n, char *v)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (c[n] != '\0')
	{
		while (c[n] != '\n')
		{
			if (c[n] == v[0])
				bf[i][j] = 1;
			else if (c[n] == v[1])
				bf[i][j] = 0;
			n++;
			j++;
		}
		n++;
		i++;
		j = 0;
	}
	return (bf);
}

int			**numbersmap(char *c, int r, int l, char *val)
{
	int n;
	int i;
	int **buff;

	n = 0;
	i = 0;
	buff = malloc(r * sizeof(int *));
	while (i < r)
	{
		buff[i] = malloc(l * sizeof(int *));
		i++;
	}
	while (c[n] != '\n')
	{
		n++;
	}
	n++;
	buff = numbers(c, buff, n, val);
	return (buff);
}
