/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_control3c.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 21:25:27 by amolina-          #+#    #+#             */
/*   Updated: 2020/12/06 22:03:17 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		error_control3c(int *irw, int *lcol, int *rcol)
{
	int n;

	n = 1;
	if ((irw[0] == 1 && lcol[3] == 4) || (irw[0] == 4 && lcol[3] == 1))
	{
		write(1, "Error\n", 6);
		n = 0;
	}
	else if ((irw[3] == 1 && rcol[3] == 2) || (irw[3] == 2 && rcol[3] == 1))
	{
		write(1, "Error\n", 6);
		n = 0;
	}
	else if ((irw[3] == 1 && rcol[3] == 3) || (irw[3] == 3 && rcol[3] == 1))
	{
		write(1, "Error\n", 6);
		n = 0;
	}
	else if ((irw[3] == 1 && rcol[3] == 4) || (irw[3] == 4 && rcol[3] == 1))
	{
		write(1, "Error\n", 6);
		n = 0;
	}
	return (n);
}
