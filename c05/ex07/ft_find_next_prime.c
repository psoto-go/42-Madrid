/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 10:51:09 by psoto-go          #+#    #+#             */
/*   Updated: 2020/12/16 11:37:22 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_find_next_prime(int nb)
{
	int n;
	int	out;
	int res;

	n = nb;
	out = 0;
	res = 0;
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
	return (out = 0);
}
