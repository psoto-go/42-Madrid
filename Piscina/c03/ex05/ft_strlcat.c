/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 11:29:50 by psoto-go          #+#    #+#             */
/*   Updated: 2020/12/10 15:31:15 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int		ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				i;
	int				h;
	unsigned int	count;

	i = 0;
	h = 0;
	count = size - 1;
	while (dest[i] != '\0')
		i++;
	while (src[h] != '\0' && count > size)
	{
		count++;
		dest[i] = src[h];
		i++;
		h++;
	}
	while (src[h] != '\0' && count)
	{
		dest[i] = src[h];
		i++;
		h++;
	}
	dest[i] = '\0';
	return (dest);
}
