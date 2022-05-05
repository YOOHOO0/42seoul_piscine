/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 11:17:48 by seoshin           #+#    #+#             */
/*   Updated: 2022/04/25 19:00:21 by seoshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i])
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
			j++;
		if (!to_find[j])
			return (&str[i]);
		i++;
		j = 0;
	}
	return (0);
}

/*
#include <stdio.h>

int main(void)
{
	char* str = "seseoshin";
	char* to_find = "seo";
	printf("%s", ft_strstr(str, to_find));
}
*/
