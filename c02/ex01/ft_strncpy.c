/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 15:59:12 by psoto-go          #+#    #+#             */
/*   Updated: 2020/12/14 10:53:00 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int co;

	co = 0;
	while (src[co] != '\0' && co < n)
	{
		dest[co] = src[co];
		co++;
	}
	while (co < n)
	{
		dest[co] = '\0';
		co++;
	}
	return (dest);
}

int 	main(void)
{
	char array1[] = "hola";
	char array3[] = "1234";
	ft_strncpy(array1, array3, 3);
	printf("%s", array1);


}
