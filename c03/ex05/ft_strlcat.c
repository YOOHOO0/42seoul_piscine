/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 18:19:34 by seoshin           #+#    #+#             */
/*   Updated: 2022/04/25 16:52:58 by seoshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	len(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len_dest;

	len_dest = len(dest);
	if (size <= len_dest)
		return (len(src) + size);
	else
	{
		i = 0;
		while (len_dest + i + 1 < size && (src[i] != '\0'))
		{
			dest[len_dest + i] = src[i];
			i++;
		}
		dest[len_dest + i] = '\0';
		return (len_dest + len(src));
	}
}

/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char str1[200] = "abcdef";
	char str2[] = "aa";
	printf("%d", ft_strlcat(str1, str2, 8));
	printf("%s", str1);
	return 0;
}
*/
