/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorzibek <yorzibek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 16:07:49 by yorzibek          #+#    #+#             */
/*   Updated: 2024/10/28 10:30:10 by yorzibek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}

// int	main(void)
// {
// 	int	tab[6] = {6, 5, 4, 3, 2, 1};
// 	int	i;

// 	i = 0;
// 	ft_sort_int_tab(tab, 6);
// 	while (i < 6)
// 	{
// 		printf("%d", tab[i]);
// 		i++;
// 	}

// 	return (0);
// }
