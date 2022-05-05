/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 17:00:29 by seoshin           #+#    #+#             */
/*   Updated: 2022/04/23 11:25:47 by seoshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!('a' <= str[i] && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}

/*
int main(void)
{
	char *str1 = "jsdfklsjasd";
	char *str2 = "fsdTfsdf";
	char *str3 = "sf213sd2f";
	char *str4 = "abc d e";
	printf("%d ", ft_str_is_lowercase(str1));
	printf("%d ", ft_str_is_lowercase(str2));
	printf("%d ", ft_str_is_lowercase(str3));
	printf("%d ", ft_str_is_lowercase(str4));
	return 0;
}
*/
