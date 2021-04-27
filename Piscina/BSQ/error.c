/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparejo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 15:23:56 by jparejo-          #+#    #+#             */
/*   Updated: 2020/12/16 21:42:31 by jparejo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int			row_cmp(char *str)
{
	int n;
	int tam;

	n = 0;
	tam = 0;
	while (str[n] != '\n')
		n++;
	n++;
	while (str[n] != '\n')
	{
		tam++;
		n++;
	}
	return (tam);
}

int			cuentalong(char *str)
{
	int t;
	int n;
	int i;

	t = row_cmp(str);
	n = 0;
	i = 0;
	while (str[n] != '\n')
		n++;
	while (str[n] != '\0')
	{
		n++;
		if (str[n] != '\n')
			i++;
		else
		{
			if (i != t)
				return (0);
			i = 0;
		}
	}
	return (1);
}

int			cuentafilas(char *str)
{
	int	c;
	int	n;

	c = 0;
	n = 0;
	while (str[c] != '\0')
	{
		if (str[c] == '\n')
			n++;
		c++;
	}
	n--;
	return (n);
}

int			comparaenunciado(char *str, char *v)
{
	int n;

	n = 0;
	while (str[n] != '\n')
		n++;
	while (str[n] != '\0')
	{
		if (str[n] != v[0] && str[n] != v[1] && str[n] != '\n')
			return (0);
		n++;
	}
	return (1);
}
