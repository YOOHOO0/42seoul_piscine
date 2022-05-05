/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoshin <seoshin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 17:16:43 by seoshin           #+#    #+#             */
/*   Updated: 2022/05/04 17:18:39 by seoshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	up;
	int	down;
	int	i;

	up = 0;
	down = 0;
	i = 0;
	if (length == 1)
		return (1);
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			up++;
		else if (f(tab[i], tab[i + 1]) > 0)
			down++;
		i++;
	}
	if (up && down)
		return (0);
	else
		return (1);
}
