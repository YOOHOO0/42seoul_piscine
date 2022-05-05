/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 17:01:06 by seoshin           #+#    #+#             */
/*   Updated: 2022/04/23 11:25:45 by seoshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!('A' <= str[i] && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}

/*
int main(void)
{
	char *str1 = "A";
	char *str2 = "fsdTfsdf";
	char *str3 = "A213DD2Z";
	char *str4 = "ABC D E";
	char *str5 = "\0";
	printf("%d ", ft_str_is_uppercase(str1));
	printf("%d ", ft_str_is_uppercase(str2));
	printf("%d ", ft_str_is_uppercase(str3));
	printf("%d ", ft_str_is_uppercase(str4));
	printf("%d ", ft_str_is_uppercase(str5));
	return 0;
}
*/
