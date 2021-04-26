/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 13:10:54 by psoto-go          #+#    #+#             */
/*   Updated: 2020/12/11 10:48:09 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				i;
	unsigned int	count;
	unsigned int	s;

	i = 0;
	count = 0;
	s = 0;
	if (s1[0] == s2[0] && count < n)
	{
		while ((((unsigned char)s1[i] != '\0' && (unsigned char)s2[i] != '\0')
				&& (unsigned char)s1[i] == (unsigned char)s2[i]) && count < n)
		{
			count++;
			i++;
			if (((unsigned char)s1[i] != (unsigned char)s2[i]) && count < n)
				s = (unsigned char)s1[i] - (unsigned char)s2[i];
		}
	}
	else if (n == 0)
		s = 0;
	else
		s = (unsigned char)s1[i] - (unsigned char)s2[i];
	return (s);
}
