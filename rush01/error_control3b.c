/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_control3b.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 21:23:03 by amolina-          #+#    #+#             */
/*   Updated: 2020/12/06 22:01:13 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		error_control3b(int *srw, int *irw, int *lcol, int *rcol)
{
	int n;

	n = 1;
	if ((srw[3] == 1 && rcol[0] == 3) || (srw[3] == 3 && rcol[0] == 1))
	{
		write(1, "Error\n", 6);
		n = 0;
	}
	else if ((srw[3] == 1 && rcol[0] == 4) || (srw[3] == 4 && rcol[0] == 1))
	{
		write(1, "Error\n", 6);
		n = 0;
	}
	else if ((irw[0] == 1 && lcol[3] == 2) || (irw[0] == 2 && lcol[3] == 1))
	{
		write(1, "Error\n", 6);
		n = 0;
	}
	else if ((irw[0] == 1 && lcol[3] == 3) || (irw[0] == 3 && lcol[3] == 1))
	{
		write(1, "Error\n", 6);
		n = 0;
	}
	return (n);
}
