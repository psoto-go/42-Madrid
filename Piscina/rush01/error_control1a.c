/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_control1a.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 17:59:53 by amolina-          #+#    #+#             */
/*   Updated: 2020/12/06 21:54:49 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		error_control1a(char **argv)
{
	int i;
	int count;
	int n;

	i = 0;
	count = 0;
	n = 1;
	while (argv[1][i] != '\0')
	{
		count++;
		i++;
	}
	if (count != 31)
	{
		write(1, "Error\n", 6);
		n = 0;
	}
	return (n);
}
