/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 15:37:07 by psoto-go          #+#    #+#             */
/*   Updated: 2020/12/02 09:42:08 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a, char aa, char b, char bb)
{
	write(1, &a, 1);
	write(1, &aa, 1);
	write(1, " ", 1);
	write(1, &b, 1);
	write(1, &bb, 1);
}

void	ft_putchar_coma(char a, char aa, char b, char bb)
{
	if ((a == '0') && (aa == '0') && (b == '0') && (bb == '1'))
	{
		write(1, "", 0);
	}
	else
	{
		write(1, ", ", 2);
	}
}

void	bucles(char a, char aa, char b, char bb)
{
	while (a <= '9')
	{
		while (aa <= '9')
		{
			while (b <= '9')
			{
				while (bb <= '9')
				{
					ft_putchar_coma(a, aa, b, bb);
					ft_putchar(a, aa, b, bb);
					bb++;
				}
				b++;
				bb = '0';
			}
			aa++;
			b = a;
			bb = aa + 1;
		}
		a++;
		aa = '0';
		b = a;
		bb = aa + 1;
	}
}

void	ft_print_comb2(void)
{
	char n1;
	char n2;
	char n3;
	char n4;

	n1 = '0';
	n2 = '0';
	n3 = '0';
	n4 = '1';
	bucles(n1, n2, n3, n4);
}
