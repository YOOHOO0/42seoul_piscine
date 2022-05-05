/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoshin <seoshin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 17:58:03 by seoshin           #+#    #+#             */
/*   Updated: 2022/05/03 12:40:46 by seoshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	b_handling(char *base)
{
	int	i;
	int	j;

	if (len(base) <= 1)
		return (1);
	i = 0;
	j = 0;
	while (base[i] != '\0')
	{
		if (('\t' <= base[i] && base[i] <= '\r') || base[i] == ' '
			|| base[i] == '+' || base[i] == '-')
			return (1);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	str_in_base(char *str, char *base)
{
	int	flag;
	int	i;

	flag = 0;
	i = 0;
	while (i < len(base))
	{
		if (*str == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	num;

	if (b_handling(base))
		return (0);
	num = 0;
	sign = 1;
	i = 0;
	while (('\t' <= str[i] && str[i] <= '\r') || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str_in_base(&str[i], base) != -1)
	{
		num += str_in_base(&str[i], base);
		if (str_in_base(&str[i + 1], base) != -1)
			num *= len(base);
		i++;
	}
	return (num * sign);
}

/*
#include <stdio.h>
int main(void)
{
	char *str = "      +100o878";
	char *base = "0123456789abcdef";
	printf("%d", ft_atoi_base(str, base));
	return 0;
}
*/
