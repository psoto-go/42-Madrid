/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 18:14:26 by psoto-go          #+#    #+#             */
/*   Updated: 2020/12/17 10:30:48 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int factorial;

	factorial = 1;
	if (nb < 0)
	{
		factorial = 0;
	}
	while (0 < nb)
	{
		factorial = factorial * nb;
		nb--;
	}
	return (factorial);
}
