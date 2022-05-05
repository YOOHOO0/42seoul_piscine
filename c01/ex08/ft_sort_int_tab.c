/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 11:51:55 by seoshin           #+#    #+#             */
/*   Updated: 2022/04/18 11:52:50 by seoshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size - 1)
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

/*
int main(void)
{
	int k;
	int arr[5];

	arr[0] = 5;
	arr[1]= -5;
	arr[2]= 100;
	arr[3]= 0;
	arr[4]= 17;
	ft_sort_int_tab(arr, 5);
	k = 0;
	while(k < 5)
	{
		
		printf("%d", arr[k]);
		k++;
	}
	return 0;
}
*/
