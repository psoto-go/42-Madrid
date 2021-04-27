/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_control3a.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 18:41:29 by amolina-          #+#    #+#             */
/*   Updated: 2020/12/06 22:01:35 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		error_control3a(int *srw, int *lcol, int *rcol)
{
	int n;

	n = 1;
	if ((srw[0] == 1 && lcol[0] == 2) || (srw[0] == 2 && lcol[0] == 1))
	{
		write(1, "Error\n", 6);
		n = 0;
	}
	else if ((srw[0] == 1 && lcol[0] == 3) || (srw[0] == 3 && lcol[0] == 1))
	{
		write(1, "Error\n", 6);
		n = 0;
	}
	else if ((srw[0] == 1 && lcol[0] == 4) || (srw[0] == 4 && lcol[0] == 1))
	{
		write(1, "Error\n", 6);
		n = 0;
	}
	else if ((srw[3] == 1 && rcol[0] == 2) || (srw[3] == 2 && rcol[0] == 1))
	{
		write(1, "Error\n", 6);
		n = 0;
	}
	return (n);
}
