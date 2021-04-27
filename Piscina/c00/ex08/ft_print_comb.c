/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 18:39:58 by psoto-go          #+#    #+#             */
/*   Updated: 2020/12/01 21:20:27 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn(int n)
{
	int
	if (n > -2147483648 || n <= 2147483647)
	{
		if (n == -2147483648)
		{
			ft_putchar('-');
			ft_putchar('2');
			ft_putnbr(1474883648);
		}
		else if (n >= 10)
		{
			ft_putnbr(n / 10);
			ft_putnbr(n % 10);
		}
		else if (n < 0)
		{
			n = -n;
			ft_putchar('-');
			ft_putnbr(b);
		}
		else
		{
			ft_putchar(b + '0');
		}
	}
}
