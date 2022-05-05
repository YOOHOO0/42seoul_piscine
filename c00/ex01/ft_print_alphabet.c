/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 20:37:29 by seoshin           #+#    #+#             */
/*   Updated: 2022/04/18 12:08:48 by seoshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	*c;

	c = "abcdefghijklmnopqrstuvwxyz";
	write(1, c, 26);
}

/*
int main(void)
{
	ft_print_alphabet();
	return 0;
}
*/
