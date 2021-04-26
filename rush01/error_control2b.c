/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_control2b.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 21:12:58 by amolina-          #+#    #+#             */
/*   Updated: 2020/12/06 21:50:17 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		error_control2b(int *srw, int *irw, int *lcol, int *rcol)
{
	int i;
	int n;

	i = 0;
	n = 1;
	while (i < 4)
	{
		if ((srw[i] == 3 && irw[i] == 4) || (srw[i] == 4 && irw[i] == 3))
		{
			write(1, "Error\n", 6);
			n = 0;
		}
		else if ((srw[i] == 4 && irw[i] == 4) || (lcol[i] == 4 && rcol[i] == 4))
		{
			write(1, "Error\n", 6);
			n = 0;
		}
		i++;
	}
	return (n);
}
