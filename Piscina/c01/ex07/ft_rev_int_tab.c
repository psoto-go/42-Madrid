/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 13:49:40 by psoto-go          #+#    #+#             */
/*   Updated: 2020/12/05 12:01:21 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int temp;
	int ini;
	int fin;

	ini = 0;
	fin = size - 1;
	while (ini < fin)
	{
		temp = tab[fin];
		tab[fin] = tab[ini];
		tab[ini] = temp;
		ini++;
		fin--;
	}
}
