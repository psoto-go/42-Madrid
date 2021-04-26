/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_control2c.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 21:17:44 by amolina-          #+#    #+#             */
/*   Updated: 2020/12/06 21:58:37 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		error_control2c(int *lcol, int *rcol)
{
	int i;
	int n;

	i = 0;
	n = 1;
	while (i < 4)
	{
		if ((lcol[i] == 2 && rcol[i] == 4) || (lcol[i] == 4 && rcol[i] == 2))
		{
			write(1, "Error\n", 6);
			n = 0;
		}
		else if ((lcol[i] == 3 && rcol[i] == 4) ||
			(lcol[i] == 4 && rcol[i] == 3))
		{
			write(1, "Error\n", 6);
			n = 0;
		}
		i++;
	}
	return (n);
}
