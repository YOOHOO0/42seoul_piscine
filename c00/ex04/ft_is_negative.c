/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 20:47:54 by seoshin           #+#    #+#             */
/*   Updated: 2022/04/18 12:12:26 by seoshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int num)
{
	char	*n;
	char	*p;

	n = "N";
	p = "P";
	if (num >= 0)
	{
		write(1, p, 1);
	}
	else
	{
		write(1, n, 1);
	}
}

/*
int main(void)
{
	ft_is_negative(-100);
	ft_is_negative(0);
	ft_is_negative(100);
	return 0;
}
*/
