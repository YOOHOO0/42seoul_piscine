/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_nex_prime.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoshin <seoshin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 16:13:40 by seoshin           #+#    #+#             */
/*   Updated: 2022/04/28 16:02:23 by seoshin          ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	while (1)
	{
		if (ft_is_prime(nb))
			return (nb);
		nb++;
	}
}

/*
#include <stdio.h>

int main(void)
{
	printf("%d %d %d", 
	ft_find_next_prime(2147483630), 
	ft_find_next_prime(5), 
	ft_find_next_prime(12));
	return 0;
}
*/
