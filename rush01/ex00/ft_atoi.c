/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juneykim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 13:55:51 by juneykim          #+#    #+#             */
/*   Updated: 2022/04/23 14:46:41 by juneykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_get_sign(char *str)
{
	unsigned long int	minus_cnt;

	minus_cnt = 0;
	while (*str)
	{
		if (*str == '-')
			minus_cnt++;
		else if (*str >= '0' && *str <= '9')
			break ;
		str++;
	}
	if (minus_cnt % 2)
		return (-1);
	else
		return (1);
}

unsigned long int	ft_get_last_idx(char *str)
{
	unsigned long int	idx;
	char				is_on_num;

	idx = 0;
	is_on_num = 0;
	while (str[idx])
	{
		if (str[idx] >= '0' && str[idx] <= '9' && !is_on_num)
			is_on_num = 1;
		else if ((str[idx] < '0' || str[idx] > '9') && is_on_num)
			break ;
		idx++;
	}
	if (idx > 0)
		return (idx - 1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	unsigned long int	last_digit_idx;
	int					decimal_digit;
	int					read_num;
	int					sign;

	sign = ft_get_sign(str);
	last_digit_idx = ft_get_last_idx(str);
	decimal_digit = 1;
	read_num = 0;
	while (str[last_digit_idx] >= '0' && str[last_digit_idx] <= '9')
	{
		if (sign == 1)
			read_num += ((str[last_digit_idx] - '0') * decimal_digit);
		else
			read_num -= ((str[last_digit_idx] - '0') * decimal_digit);
		if (last_digit_idx == 0)
			break ;
		last_digit_idx--;
		decimal_digit *= 10;
	}
	return (read_num);
}
