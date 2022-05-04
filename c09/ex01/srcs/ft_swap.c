/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 11:59:30 by seoshin           #+#    #+#             */
/*   Updated: 2022/05/04 11:31:52 by seoshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
int main(void)
{
	int a;
	int b;

	a = 1;
	b = 2;
	ft_swap(&a, &b);
	printf("%d %d", a, b);
	return 0;
}
*/
