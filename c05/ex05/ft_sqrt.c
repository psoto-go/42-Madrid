/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 12:53:51 by psoto-go          #+#    #+#             */
/*   Updated: 2020/12/17 19:47:40 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_sqrt(int nb)
{
	int i;

	i = 1;
	if (nb == 1)
		return (0);
	else if (nb == 0)
		return (1);
	while (46341 > i)
	{
		if ((i * i) == nb)
			return (i);
		else
			i++;
	}
	return (0);
}

int		main(void)
{
	printf("%d", ft_sqrt());
}
