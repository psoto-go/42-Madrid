/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparejo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 21:41:46 by jparejo-          #+#    #+#             */
/*   Updated: 2020/12/16 21:51:02 by jparejo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int			repetido(char *c)
{
	int a;
	int n;

	a = c[0];
	n = 1;
	while (n < 3)
	{
		if (c[n] == a)
			return (0);
		n++;
	}
	return (1);
}

char		*caracteres(char *c)
{
	int		n;
	int		i;
	char	*valores;

	valores = malloc(3 * sizeof(char));
	n = 0;
	i = 0;
	if (c[n] < '0' || c[n] > '9')
		return (0);
	while (c[n] >= '0' && c[n] <= '9')
		n++;
	while (c[n] != '\n')
	{
		valores[i] = c[n];
		i++;
		n++;
	}
	if (i != 3 || comparaenunciado(c, valores) == 0 || repetido(valores) == 0)
		return (0);
	return (valores);
}

int			numerofilas(char *c)
{
	int n;
	int row;

	n = 0;
	row = 0;
	if (c[n] < '0' || c[n] > '9')
		return (0);
	while (c[n] >= '0' && c[n] <= '9')
	{
		row = (row * 10) + (c[n] - '0');
		n++;
	}
	return (row);
}

void		parameters(char *c)
{
	if (cuentafilas(c) != numerofilas(c)
	|| cuentalong(c) == 0
	|| caracteres(c) == 0)
	{
		write(1, "map error\n", 11);
		exit(0);
	}
}
