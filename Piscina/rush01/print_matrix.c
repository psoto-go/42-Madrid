/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_matrix.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 20:38:11 by amolina-          #+#    #+#             */
/*   Updated: 2020/12/06 22:03:34 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_matrix(int tab[4][4])
{
	int		i;
	int		j;
	char	c;

	i = 0;
	j = 0;
	c = '0';
	while (i < 4)
	{
		while (j < 4)
		{
			c = tab[i][j] + '0';
			write(1, &c, 1);
			j++;
		}
		write(1, "\n", 1);
		j = 0;
		i++;
	}
}
