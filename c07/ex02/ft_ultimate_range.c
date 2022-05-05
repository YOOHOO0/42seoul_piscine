/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoshin <seoshin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 19:30:46 by seoshin           #+#    #+#             */
/*   Updated: 2022/05/03 11:21:53 by seoshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int			*numarr;
	int			i;
	long long	size;

	if (min >= max)
		return (0);
	size = (long long)max - (long long)min;
	numarr = (int *)malloc(sizeof(int) * (size));
	if (!numarr)
		return (-1);
	i = 0;
	while (min < max)
	{
		numarr[i] = min;
		i++;
		min++;
	}
	*range = numarr;
	return (i);
}

/*
#include <stdio.h>
int main()
{
	int min = -3;
	int	max = 6;
	int *arr;	
	printf("min :%d  max: %d\n\n",min, max);
	int result =ft_ultimate_range(&arr, min, max);
	printf("result:::::: len :%d \n\n\n\n",result);
	if (result <= 0)
	{
		printf("ex02 error check is ok\n");
	}
	else
	{
		for (int i = 0; i < result; i++)
		{
			printf("arr[%d] : %d\n", i,arr[i]);
		}
		free(arr);
	}
}
*/
