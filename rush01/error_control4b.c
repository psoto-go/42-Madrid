/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_control4b.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 21:10:23 by psoto-go          #+#    #+#             */
/*   Updated: 2020/12/06 22:00:06 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		error_control4b(int *srw, int *irw)
{
	int i;
	int count1;
	int count2;
	int n;

	count1 = 0;
	count2 = 0;
	i = 0;
	n = 1;
	while (i < 4)
	{
		if (srw[i] == 1)
			count1++;
		if (irw[i] == 1)
			count2++;
		i++;
	}
	if (count1 > 1 || count2 > 1)
	{
		write(1, "Error\n", 6);
		n = 0;
	}
	return (n);
}
