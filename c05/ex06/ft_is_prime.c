/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoshin <seoshin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 16:12:51 by seoshin           #+#    #+#             */
/*   Updated: 2022/04/28 14:38:37 by seoshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	long long	i;
	long long	temp;

	temp = (long long)nb;
	i = 2;
	if (temp <= 1)
		return (0);
	while (i * i <= temp)
	{
		if ((temp % i) == 0)
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>
int main(void)
{
	printf("0 : %d / ",ft_is_prime(0));
	printf("1 : %d / ",ft_is_prime(1));
	printf("2 : %d / ",ft_is_prime(2));
	printf("-3 : %d / ",ft_is_prime(-3));
	printf("4 : %d / ",ft_is_prime(4));
	printf("5 : %d / ",ft_is_prime(5));
	printf("6 : %d / ",ft_is_prime(6));
	printf("7 : %d / ",ft_is_prime(7));
	printf("8 : %d / ",ft_is_prime(8));
	printf("4673 : %d / ",ft_is_prime(4673));
	printf("10 : %d / ",ft_is_prime(10));
	printf("100 : %d / ",ft_is_prime(100));
	printf("101 : %d / ",ft_is_prime(101));
	printf("11 : %d / ",ft_is_prime(11));
	printf("93 : %d / ",ft_is_prime(93));
	printf("2147483647 : %d / ", ft_is_prime(2147483647));
	return 0;
}
*/
