/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 16:15:57 by seoshin           #+#    #+#             */
/*   Updated: 2022/04/23 11:25:30 by seoshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*upper_to_low(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ('A' <= str[i] && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	upper_to_low(str);
	i = 0;
	while (str[i] != '\0')
	{
		if ((i == 0) && ('a' <= str[i] && str[i] <= 'z'))
			str[i] -= 32;
		else if ((i == 0) || ('0' <= str[i - 1] && str[i - 1] <= '9'))
		{
			i++;
			continue ;
		}
		else if (!('a' <= str[i - 1] && str[i - 1] <= 'z'))
		{
			if (!('A' <= str[i - 1] && str[i - 1] <= 'Z'))
			{
				if ('a' <= str[i] && str[i] <= 'z')
					str[i] -= 32;
			}
		}
		i++;
	}
	return (str);
}

/*
#include <stdio.h>
int main(void)
{
	char str1[100] =  "-7bvA?>1w$ >5.,Jma~7|$";
	printf("%s\n", ft_strcapitalize(str1));
	return (0);
}
*/
