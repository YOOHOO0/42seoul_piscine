/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 19:30:33 by seoshin           #+#    #+#             */
/*   Updated: 2022/04/19 18:16:47 by seoshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putnum(int n)
{
	char	c;

	c = n + '0';
	write(1, &c, 1);
}

void	dfs(int number, int index, int n, int arr[])
{
	int	i;

	if (index == n)
	{
		i = 0;
		while (i < index)
		{
			putnum(arr[i]);
			i++;
		}
		if (!(arr[0] == 9 - n + 1))
			write(1, ", ", 2);
		return ;
	}
	while (number <= 9 - n + index + 1)
	{
		arr[index] = number;
		dfs(number + 1, index + 1, n, arr);
		number++;
	}
}

void	ft_print_combn(int n)
{
	int	arr[9];

	dfs(0, 0, n, arr);
}


int	main(void)
{
	ft_print_combn(3);
	return (0);
}

