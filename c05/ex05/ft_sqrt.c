/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoshin <seoshin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 14:10:40 by seoshin           #+#    #+#             */
/*   Updated: 2022/04/28 14:37:31 by seoshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long long	i;
	long long	min;
	long long	max;
	long long	mid;

	i = 1;
	min = 0;
	max = (long long)nb;
	while (min <= max)
	{
		mid = (min + max) / 2;
		if (mid * mid == nb)
			return (mid);
		else if (mid * mid > nb)
			max = mid - 1;
		else
			min = mid + 1;
	}
	return (0);
}

/*
#include <stdio.h>
#include <math.h>
int main(void)
{
    printf("sqrt of %d is %d\n", -3667, ft_sqrt(-3667));
    printf("sqrt of %d is %d\n", 0, ft_sqrt(0));
    printf("sqrt of %d is %d\n", 1, ft_sqrt(1));
    printf("sqrt of %d is %d\n", 2, ft_sqrt(2));
    printf("sqrt of %d is %d\n", 1640045925, ft_sqrt(1640045925));
    printf("sqrt of %d is %d\n", 2147395600, ft_sqrt(2147395600));
    printf("sqrt of %d is %d\n", 2147483646, ft_sqrt(2147483646));
    printf("sqrt of %d is %d\n", 8814961, ft_sqrt(8814961));
    printf("sqrt of %d is %d\n", 462178337, ft_sqrt(462178337));
    printf("sqrt of %d is %d\n", 1763496036, ft_sqrt(1763496036));
    printf("sqrt of %d is %d\n", 1488223931, ft_sqrt(1488223931));
    printf("sqrt of %d is %d\n", 1925805456, ft_sqrt(1925805456));
    printf("sqrt of %d is %d\n", 1012354788, ft_sqrt(1012354788));
    printf("sqrt of %d is %d\n", 220374025, ft_sqrt(220374025));
    printf("sqrt of %d is %d\n", 650699549, ft_sqrt(650699549));
    printf("sqrt of %d is %d\n", 11276164, ft_sqrt(11276164));
    printf("sqrt of %d is %d\n", 1445789566, ft_sqrt(1445789566));
	return 0;
}
*/
