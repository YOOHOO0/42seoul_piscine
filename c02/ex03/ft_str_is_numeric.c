/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 16:59:04 by seoshin           #+#    #+#             */
/*   Updated: 2022/04/23 17:45:51 by seoshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!('0' <= str[i] && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>

int main(void)
{
	char *str1 = "4654132156";
	char *str2 = "554 ";
	char *str3 = "dsfa54sdf ";
	char *str4 = " 0 ";
	printf("%d ", ft_str_is_numeric(str1));
	printf("%d ", ft_str_is_numeric(str2));
	printf("%d ", ft_str_is_numeric(str3));
	printf("%d ", ft_str_is_numeric(str3));
	return 0;
}
*/
