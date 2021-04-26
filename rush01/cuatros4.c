/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cuatros4.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 22:25:04 by amolina-          #+#    #+#             */
/*   Updated: 2020/12/06 22:29:32 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	cuatros4(int tab[4][4], int *lcol, int *rcol)
{
	int		i;
	char	c;

	i = 0;
	c = '0';
	while (i < 4)
	{
		if (lcol[i] == 2 && rcol[i] == 3)
		{
			tab[i][1] = 4;
			c = tab[i][1];
			write(1, &c, 1);
		}
		if (lcol[i] == 3 && rcol[i] == 2)
		{
			tab[i][2] = 4;
			c = tab[i][2];
			write(1, &c, 1);
		}
		i++;
	}
}
