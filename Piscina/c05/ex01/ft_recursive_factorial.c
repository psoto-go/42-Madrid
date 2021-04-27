/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 11:41:49 by psoto-go          #+#    #+#             */
/*   Updated: 2020/12/17 12:49:50 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_factorial(int nb)
{
	int	factorial;

	if (nb == 0)
		factorial = 1;
	else if (nb > 0)
		factorial = nb * ft_recursive_factorial(nb - 1);
	else
		factorial = 0;
	return (factorial);
}

int 		main(void)
{
	printf("%d", ft_recursive_factorial(1231));
}
