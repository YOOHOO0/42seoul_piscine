/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 17:07:09 by seoshin           #+#    #+#             */
/*   Updated: 2022/04/18 12:14:29 by seoshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	arr(int a, int b, char num[])
{
	num[0] = a / 10 + '0';
	num[1] = a % 10 + '0';
	num[2] = b / 10 + '0';
	num[3] = b % 10 + '0';
}

void	ft_print_comb2(void)
{	
	int		a;
	int		b;
	char	num[4];

	a = 0;
	while (a < 99)
	{
		b = a + 1;
		while (b < 100)
		{
			arr(a, b, num);
			write(1, num, 2);
			write(1, " ", 1);
			write(1, &num[2], 2);
			if (!(a == 98))
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}

/*
int main(void)
{
	ft_print_comb2();
	return 0;
}
*/
