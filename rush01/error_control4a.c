/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_control4a.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 19:42:41 by amolina-          #+#    #+#             */
/*   Updated: 2020/12/06 22:01:51 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		error_control4a(int *lcol, int *rcol)
{
	int i;
	int count3;
	int count4;
	int n;

	i = 0;
	count3 = 0;
	count4 = 0;
	n = 1;
	while (i < 4)
	{
		if (lcol[i] == 1)
			count3++;
		if (rcol[i] == 1)
			count4++;
		i++;
	}
	if (count3 > 1 || count4 > 1)
	{
		write(1, "Error\n", 6);
		n = 0;
	}
	return (n);
}
