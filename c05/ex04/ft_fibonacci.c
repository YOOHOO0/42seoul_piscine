/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoshin <seoshin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 16:11:16 by seoshin           #+#    #+#             */
/*   Updated: 2022/04/27 16:15:19 by seoshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0 || index == 1)
		return (index);
	return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}

/*
#include <stdio.h>

int main(void)
{
	printf("%d %d %d %d %d %d", 
	ft_fibonacci(0), ft_fibonacci(1), ft_fibonacci(2), 
	ft_fibonacci(3), ft_fibonacci(4), ft_fibonacci(5));
	return 0;
}
*/
