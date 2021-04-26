/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 11:24:41 by psoto-go          #+#    #+#             */
/*   Updated: 2020/12/11 11:22:55 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	count;
	int i;
	int aux;

	count = 0;
	i = 0; 
	while (count < size)
	{
		while (i < size)
		{
			if (tab[i] > tab[i + 1]) 
			{
					aux = tab[i + 1];
					tab[i + 1] = tab[i];
					tab[i] = aux;
			}
			i++;
		}
		//i++;
		count++;
	}
}

int		main(void)
{
	int		array1[] = {1, 4, 2, 8, 6, 3};
	int	a;
	int	i;

	a = 5;
	ft_sort_int_tab(array1, a);
	while (array1[i] != '\0')
	write(1, &array1[i], 1);
}
