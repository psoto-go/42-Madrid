/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 11:56:06 by psoto-go          #+#    #+#             */
/*   Updated: 2020/12/02 09:40:45 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void);

void	ft_print_numbers(void)
{
	char numeroinicio;
	char numerofinal;

	numeroinicio = '0';
	numerofinal = 58;
	while (numeroinicio != numerofinal)
	{
		write(1, &numeroinicio, 1);
		numeroinicio++;
	}
}
