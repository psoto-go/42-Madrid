/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 16:01:43 by psoto-go          #+#    #+#             */
/*   Updated: 2020/12/09 10:29:36 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int		ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				n;

	i = 0;
	n = 0;
	size = size - 1;
	while (src[i] != '\0' && i < size)
	{
		dest[i] = src[i];
		i++;
	}
	while (dest[i] != '\0')
	{
		dest[i] = '\0';
		i++;
	}
	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}
