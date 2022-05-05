/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 12:03:36 by seoshin           #+#    #+#             */
/*   Updated: 2022/04/27 13:39:34 by seoshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	*ft_print_memory(void *addr, unsigned int size)
{
	size = 0;
	unsigned long long a;
	unsigned char *ab;
	ab = (unsigned char *)addr;
	a = (unsigned long long)ab;
	printf("%llu", a);
	return (addr);
}

int main(void)
{
	void *c = "Bonjour les amin";
	ft_print_memory(c, 16);
	return (0);
}

