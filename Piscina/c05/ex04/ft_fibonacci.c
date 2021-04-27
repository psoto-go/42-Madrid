/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 12:09:10 by psoto-go          #+#    #+#             */
/*   Updated: 2020/12/16 12:20:57 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	int out;

	out = 2;
	if (index < 0)
		return (out = -1);
	if (index == 0)
		return (out = 0);
	if (index == 1)
		return (out = 1);
	else
		return (out = (ft_fibonacci(index - 1) + ft_fibonacci(index - 2)));
}
