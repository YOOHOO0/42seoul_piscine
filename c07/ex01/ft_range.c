/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoshin <seoshin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 11:20:55 by seoshin           #+#    #+#             */
/*   Updated: 2022/05/03 11:22:56 by seoshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int			i;
	int			*arr;
	long long	size;

	if (min >= max)
		return (0);
	size = (long long)max - (long long)min;
	arr = (int *)malloc((size) * sizeof(int));
	if (!arr)
		return (0);
	i = 0;
	while (min < max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}

/*
#include <stdio.h>

int main(void)
{
	int *num;

	num = ft_range(1, 4);
	printf("%d %d %d", num[0], num[1], num[2]);
	free(num);
	return 0;
}
*/
