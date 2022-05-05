/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoshin <seoshin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 16:20:34 by seoshin           #+#    #+#             */
/*   Updated: 2022/04/30 14:53:29 by seoshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check(int idx, int num, int chess[])
{
	int	p_idx;

	p_idx = 0;
	while (p_idx < idx)
	{
		if (chess[p_idx] == num)
			return (0);
		else if (chess[p_idx] + p_idx == num + idx)
			return (0);
		else if (chess[p_idx] - p_idx == num - idx)
			return (0);
		p_idx++;
	}
	return (1);
}

void	ft_reculsive(int idx, int chess[], int *casenum)
{
	int		num;
	int		i;
	char	temp;

	if (idx == 10)
	{
		i = -1;
		while (++i < idx)
		{
			temp = chess[i] + '0';
			write(1, &temp, 1);
		}
		write(1, "\n", 1);
		(*casenum)++;
		return ;
	}
	num = -1;
	while (++num < 10)
	{
		if (check(idx, num, chess))
		{
			chess[idx] = num;
			ft_reculsive(idx + 1, chess, casenum);
		}
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	i;
	int	chess[10];
	int	casenum;

	casenum = 0;
	i = 0;
	while (i < 10)
	{
		chess[0] = i;
		ft_reculsive(1, chess, &casenum);
		i++;
	}
	return (casenum);
}

/*
#include <stdio.h>

int main()
{
	printf("%d", ft_ten_queens_puzzle());
}
*/
