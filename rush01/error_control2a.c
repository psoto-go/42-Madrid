/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_control2a.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 18:24:05 by amolina-          #+#    #+#             */
/*   Updated: 2020/12/06 22:00:46 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		error_control2a(int *srw, int *irw, int *lcol, int *rcol)
{
	int i;
	int n;

	i = 0;
	n = 1;
	while (i < 4)
	{
		if ((srw[i] == 1 && irw[i] == 1) || (lcol[i] == 1 && rcol[i] == 1))
		{
			write(1, "Error\n", 6);
			n = 0;
		}
		else if ((srw[i] == 2 && irw[i] == 4) || (srw[i] == 4 && irw[i] == 2))
		{
			write(1, "Error\n", 6);
			n = 0;
		}
		else if ((srw[i] == 3 && irw[i] == 3) || (lcol[i] == 3 && rcol[i] == 3))
		{
			write(1, "Error\n", 6);
			n = 0;
		}
	}
	return (n);
}
