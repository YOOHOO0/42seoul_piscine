/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 11:11:48 by seoshin           #+#    #+#             */
/*   Updated: 2022/04/23 18:18:53 by seoshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	len_dest;

	len_dest = len(dest);
	i = 0;
	while ((i < nb) && (src[i] != '\0'))
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return (dest);
}

/*
#include <stdio.h>

int	main(void)
{
	char str1[10] = "abcd";
	char str2[] = "efgh";
	ft_strncat(str1, str2, 2);
	printf("%s", str1);
	return 0;
}
*/
