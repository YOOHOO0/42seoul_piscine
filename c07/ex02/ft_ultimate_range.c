/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoshin <seoshin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 19:30:46 by seoshin           #+#    #+#             */
/*   Updated: 2022/05/03 11:21:53 by seoshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int			*numarr;
	int			i;
	long long	size;

	if (min >= max)
		return (0);
	size = (long long)max - (long long)min;
	numarr = (int *)malloc(sizeof(int) * (size));
	if (!numarr)
		return (-1);
	i = 0;
	while (min < max)
	{
		numarr[i] = min;
		i++;
		min++;
	}
	*range = numarr;
	return (i);
}
