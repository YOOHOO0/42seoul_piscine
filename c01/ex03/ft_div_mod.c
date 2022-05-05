/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 11:59:12 by seoshin           #+#    #+#             */
/*   Updated: 2022/04/18 11:59:19 by seoshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int main(void)
{
	int *div;
	int *mod;
	int n1;
	int n2;

	div = &n1;
	mod = &n2;
	ft_div_mod(5, 2, div, mod);
	printf("%d %d", *div, *mod);
	return 0;
}
*/
