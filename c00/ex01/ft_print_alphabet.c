/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 19:59:18 by psoto-go          #+#    #+#             */
/*   Updated: 2020/11/26 20:44:21 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void);

void	ft_print_alphabet(void)
{
	char letra;

	letra = 'a';
	while (letra <= 'z')
	{
		write(1, &letra, 1);
		letra++;
	}
}
