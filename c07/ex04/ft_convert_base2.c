/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoshin <seoshin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 13:32:03 by seoshin           #+#    #+#             */
/*   Updated: 2022/05/03 12:41:48 by seoshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		len_base(char *base);
int		base_check(char *base);
int		get_size(int num, char *base_to);
int		to_decimal(char *nbr, char *base_from);
int		to_decimal2(char *nbr, char *base_from, int i, int sign);
char	*to_something(int num, char *base_to);
void	to_something2(long long temp, int idx, char *answer, char *base_to);
char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int	to_decimal(char *nbr, char *base_from)
{
	int	i;
	int	sign;

	sign = 1;
	i = 0;
	while (nbr[i] == ' ' || ('\t' <= nbr[i] && nbr[i] <= '\r'))
		i++;
	while (nbr[i] == '+' || nbr[i] == '-')
	{
		if (nbr[i] == '-')
			sign *= -1;
		i++;
	}
	return (to_decimal2(nbr, base_from, i, sign));
}

int	to_decimal2(char *nbr, char *base_from, int i, int sign)
{
	int	result;
	int	j;

	result = 0;
	while (nbr[i])
	{
		j = 0;
		while (base_from[j])
		{
			if (nbr[i] == base_from[j])
			{
				result = result * len_base(base_from) + j;
				break ;
			}
			j++;
			if (j == len_base(base_from))
				return (result * sign);
		}
		i++;
	}
	return (result * sign);
}

char	*to_something(int num, char *base_to)
{
	long long	temp;
	int			idx;
	char		*answer;
	int			minus;

	temp = (long long)num;
	minus = 1;
	if (temp >= 0)
	{
		idx = get_size(temp, base_to);
		answer = malloc(get_size(temp, base_to) + 1);
	}
	else
	{
		temp *= -1;
		minus *= -1;
		idx = get_size(temp, base_to) + 1;
		answer = malloc(get_size(temp, base_to) + 2);
	}
	if (!answer)
		return (0);
	to_something2(temp, idx, answer, base_to);
	if (minus == -1)
		answer[0] = '-';
	return (answer);
}

void	to_something2(long long temp, int idx, char *answer, char *base_to)
{
	answer[idx] = '\0';
	idx--;
	while (idx >= 0)
	{
		answer[idx] = base_to[temp % len_base(base_to)];
		temp /= len_base(base_to);
		idx--;
	}
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	if (!base_check(base_from) || !base_check(base_to))
		return (0);
	return (to_something(to_decimal(nbr, base_from), base_to));
}
