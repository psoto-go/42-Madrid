/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 11:09:13 by psoto-go          #+#    #+#             */
/*   Updated: 2020/12/17 12:50:33 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	int out;

	out = nb;
	if (power == 0)
		return (out = 1);
	else if (power > 0)
	{
		if (power == 1)
			return (out);
		else
			return (out = nb * ft_recursive_power(nb, power - 1));
	}
	return (out = 0);
}
