/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algonzal <algonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 10:19:23 by algonzal          #+#    #+#             */
/*   Updated: 2020/11/28 14:42:45 by algonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x);

void	pintaini(int x)
{
	int col;

	col = 0;
	while (col < x)
	{
		if (col == 0)
		{
			ft_putchar('/');
		}
		else if (col == x - 1)
		{
			ft_putchar(+92);
		}
		else
		{
			ft_putchar('*');
		}
		col++;
	}
}

void	pintault(int x)
{
	int col;

	col = 0;
	while (col < x)
	{
		if (col == 0)
		{
			ft_putchar(+92);
		}
		else if (col == x - 1)
		{
			ft_putchar('/');
		}
		else
		{
			ft_putchar('*');
		}
		col++;
	}
}

void	pintaresto(int x)
{
	int col;

	col = 0;
	while (col < x)
	{
		if (col == 0 || col == x - 1)
		{
			ft_putchar('*');
		}
		else
		{
			ft_putchar(' ');
		}
		col++;
	}
}

void	rush(int x, int y)
{
	int fila;

	fila = 0;
	while (fila < y)
	{
		if (fila == 0)
		{
			pintaini(x);
		}
		else if (fila == y - 1)
		{
			pintault(x);
		}
		else
		{
			pintaresto(x);
		}
		fila++;
		ft_putchar('\n');
	}
}
