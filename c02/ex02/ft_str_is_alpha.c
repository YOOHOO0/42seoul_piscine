/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 16:54:06 by seoshin           #+#    #+#             */
/*   Updated: 2022/04/23 11:25:53 by seoshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!('A' <= str[i] && str[i] <= 'Z'))
		{
			if (!('a' <= str[i] && str[i] <= 'z'))
				return (0);
		}
		i++;
	}
	return (1);
}

/*
int main(void)
{
	char *str1 = "Onlyalpha";
	char *str2 = "not_5nly_alpha[]";
	char *str3 = "5462[]]]\2";
	char *str4 = "space n alpha";
	printf("%d ", ft_str_is_alpha(str1));
	printf("%d ", ft_str_is_alpha(str2));
	printf("%d ", ft_str_is_alpha(str3));
	printf("%d ", ft_str_is_alpha(str4));
	return 0;
}
*/
