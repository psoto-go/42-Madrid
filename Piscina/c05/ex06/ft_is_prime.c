/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 21:39:15 by psoto-go          #+#    #+#             */
/*   Updated: 2020/12/17 12:51:07 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int n;
	int	out;
	int res;

	n = 1;
	out = 0;
	res = 0;
	if (nb == 0)
		return (out = 0);
	else if (nb == 1)
		return (out = 0);
	else if (nb < 0)
		return (out = 0);
	while (n <= nb)
	{
		if (nb % n == 0)
		{
			res++;
		}
		n++;
	}
	if (res == 2)
		return (out = 1);
	else
		return (out = 0);
}
