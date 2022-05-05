/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoshin <seoshin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 10:48:35 by seoshin           #+#    #+#             */
/*   Updated: 2022/05/05 11:03:13 by seoshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	plus(int n1, int n2);
void	minus(int n1, int n2);
void	multi(int n1, int n2);
void	divide(int n1, int n2);
void	modulo(int n1, int n2);

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	k;

	i = 0;
	sign = 1;
	k = 0;
	while (('\t' <= str[i] && str[i] <= '\r') || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		k += str[i] - '0';
		if ('0' <= str[i + 1] && str[i + 1] <= '9')
			k *= 10;
		i++;
	}
	return (sign * k);
}

void	ft_putchar(int nb)
{
	char	c;

	c = nb + '0';
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
		ft_putnbr(nb);
	}
	else if (nb < 10)
		ft_putchar(nb);
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

int	ft_operate(char **av, void (*func[])(int, int))
{
	if (av[2][0] == '+')
		func[0](ft_atoi(av[1]), ft_atoi(av[3]));
	else if (av[2][0] == '-')
		func[1](ft_atoi(av[1]), ft_atoi(av[3]));
	else if (av[2][0] == '*')
		func[2](ft_atoi(av[1]), ft_atoi(av[3]));
	else if (av[2][0] == '/')
		func[3](ft_atoi(av[1]), ft_atoi(av[3]));
	else if (av[2][0] == '%')
		func[4](ft_atoi(av[1]), ft_atoi(av[3]));
	else
		write(1, "0", 2);
	return (0);
}

int	main(int ac, char **av)
{
	void	(*func[5])(int, int);

	func[0] = plus;
	func[1] = minus;
	func[2] = multi;
	func[3] = divide;
	func[4] = modulo;
	if (ac == 4)
	{
		if (av[2][1] != '\0')
		{
			write(1, "0\n", 2);
			return (0);
		}
		ft_operate(av, func);
		write(1, "\n", 1);
	}
	return (0);
}
