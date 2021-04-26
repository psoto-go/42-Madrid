/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initial_steps2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 12:50:15 by amolina-          #+#    #+#             */
/*   Updated: 2020/12/06 22:04:23 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	initial_steps2(char **argv, int *infrw, int *lftcol, int *rgtcol)
{
	int i;
	int j;

	i = 7;
	j = 0;
	while (i < 16)
	{
		infrw[j] = argv[1][i];
		i = i + 2;
		j++;
	}
	j = 0;
	while (i < 24)
	{
		lftcol[j] = argv[1][i];
		i = i + 2;
		j++;
	}
	j = 0;
	while (i < 32)
	{
		rgtcol[j] = argv[1][i];
		i = i + 2;
		j++;
	}
}
