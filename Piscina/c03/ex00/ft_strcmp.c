/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 11:25:49 by psoto-go          #+#    #+#             */
/*   Updated: 2020/12/10 12:24:12 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int h;

	i = 0;
	h = 0;
	while (((unsigned char)s1[i] != '\0' && (unsigned char)s2[h] != '\0') &&
			(unsigned char)s1[i] == (unsigned char)s2[h])
	{
		i++;
		h++;
	}
	if ((unsigned char)s1[i] == (unsigned char)s2[h])
		return (0);
	else if ((unsigned char)s1[i] - (unsigned char)s2[h])
		return ((unsigned char)s1[i] - (unsigned char)s2[h]);
	return (0);
}
