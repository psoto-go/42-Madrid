/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 10:32:03 by psoto-go          #+#    #+#             */
/*   Updated: 2020/12/17 12:50:19 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int	out;

	out = nb;
	if (power == 0)
		return (out = 1);
	else if (power > 0)
	{
		while (0 < (power - 1))
		{
			out = out * nb;
			power--;
		}
		return (out);
	}
	else
		return (out = 0);
}
