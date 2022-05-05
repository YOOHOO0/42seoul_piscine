/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoshin <seoshin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 18:03:21 by seoshin           #+#    #+#             */
/*   Updated: 2022/04/26 18:06:06 by seoshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	handling(char *base)
{
	int	i;
	int	j;

	if (len(base) == 0 || len(base) == 1)
		return (1);
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
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

void	dex2hex(int nbr, char *base)
{
	long	temp;

	temp = (long)nbr;
	if (nbr < 0)
	{
		write(1, "-", 1);
		temp *= -1;
	}
	if (temp < len(base))
		write(1, &base[temp], 1);
	else
	{
		dex2hex(temp / len(base), base);
		write(1, &base[temp % len(base)], 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (handling(base))
		return ;
	dex2hex(nbr, base);
}

/*
int main(void)
{
	char* base = "0123456789abcdef";
	int nbr = -2147483648;
	ft_putnbr_base(nbr, base);
}
*/
