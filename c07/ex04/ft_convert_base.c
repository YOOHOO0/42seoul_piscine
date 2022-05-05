/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoshin <seoshin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 16:06:10 by seoshin           #+#    #+#             */
/*   Updated: 2022/05/03 12:41:26 by seoshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		len_base(char *base);
int		base_check(char *base);
int		get_size(int num, char *base_to);
int		to_decimal(char *nbr, char *base_from);
int		to_decimal2(char *nbr, char *base_from, int i, int sign);
char	*to_something(int num, char *base_to);
void	to_something2(long long temp, int idx, char *answer, char *base_to);
char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int	len_base(char *base)
{
	int	len;

	len = 0;
	while (base[len])
		len++;
	return (len);
}

int	base_check(char *base)
{
	int	i;
	int	j;

	if (len_base(base) <= 1)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-'
			|| base[i] == ' ' || ('\t' <= base[i] && base[i] <= '\r'))
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	get_size(int num, char *to_base)
{
	int			count;
	long long	temp;

	temp = (long long)num;
	count = 0;
	if (temp < 0)
		temp *= -1;
	else if (temp == 0)
		return (1);
	while (temp > 0)
	{
		temp /= len_base(to_base);
		count++;
	}
	return (count);
}

/*
#include <string.h>
int main()
{
	char input[100] = "     +++---21474c83648";
	char basefrom[100] = "0123456789";
	char baseto[100] = "0123456789";
	printf("%s", ft_convert_base(input, basefrom, baseto));
}
*/
