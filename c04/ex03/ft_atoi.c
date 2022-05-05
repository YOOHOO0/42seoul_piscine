/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoshin <seoshin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 18:06:12 by seoshin           #+#    #+#             */
/*   Updated: 2022/04/27 11:11:52 by seoshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	k;

	i = 0;
	sign = 1;
	k = 0;
	while (('\t' <= str[i] && str[i] <= '\r') || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		k += str[i] - '0';
		if ('0' <= str[i + 1] && str[i + 1] <= '9')
			k *= 10;
		i++;
	}
	return (sign * k);
}

/*
#include <stdio.h>

int main(void)
{

	printf("%d", ft_atoi("   ----2147*90"));
	return 0;
}
*/
