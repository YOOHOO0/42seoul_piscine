/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 20:44:22 by seoshin           #+#    #+#             */
/*   Updated: 2022/04/18 12:10:01 by seoshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	*c;	

	c = "zyxwvutsrqponmlkjihgfedcba";
	write(1, c, 26);
}

/*
int main(void)
{
	ft_print_reverse_alphabet();
	return 0;
}
*/
