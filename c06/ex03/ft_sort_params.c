/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoshin <seoshin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 18:27:06 by seoshin           #+#    #+#             */
/*   Updated: 2022/04/27 18:48:26 by seoshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	len(char *arr)
{
	int	i;

	i = 0;
	while (arr[i] != '\0')
		i++;
	return (i);
}

int	ft_strcmp(char *a, char *b)
{
	int	i;

	i = 0;
	while (!(a[i] == '\0' && b[i] == '\0'))
	{
		if (a[i] > b[i])
			return (-1);
		else if (a[i] < b[i])
			return (1);
		i++;
	}
	return (0);
}

void	print(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		write(1, argv[i], len(argv[i]));
		write(1, "\n", 1);
		i++;
	}	
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) == -1)
			{
				temp = argv[i];
				argv[i] = argv[j];
				argv[j] = temp;
			}
			j++;
		}
		i++;
	}
	print(argc, argv);
	return (0);
}
