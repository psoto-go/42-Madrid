/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 18:23:22 by psoto-go          #+#    #+#             */
/*   Updated: 2020/12/10 12:31:43 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	int				h;
	unsigned int	count;

	i = 0;
	h = 0;
	count = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[h] != '\0' && count < nb)
	{
		count++;
		dest[i] = src[h];
		i++;
		h++;
	}
	dest[i] = '\0';
	return (dest);
}
