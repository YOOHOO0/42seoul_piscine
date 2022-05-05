/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoshin <seoshin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 11:04:04 by seoshin           #+#    #+#             */
/*   Updated: 2022/05/05 11:04:06 by seoshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

void	plus(int n1, int n2)
{
	ft_putnbr(n1 + n2);
	return ;
}

void	minus(int n1, int n2)
{
	ft_putnbr(n1 - n2);
	return ;
}

void	multi(int n1, int n2)
{
	ft_putnbr(n1 * n2);
	return ;
}

void	divide(int n1, int n2)
{
	if (n2 == 0)
	{
		write(1, "Stop : division by zero", 23);
		return ;
	}
	ft_putnbr(n1 / n2);
	return ;
}

void	modulo(int n1, int n2)
{
	if (n2 == 0)
	{
		write(1, "Stop : modulo by zero", 22);
		return ;
	}
	ft_putnbr(n1 % n2);
	return ;
}
