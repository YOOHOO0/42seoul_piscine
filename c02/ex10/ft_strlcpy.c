/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 17:06:49 by seoshin           #+#    #+#             */
/*   Updated: 2022/04/23 11:25:24 by seoshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	len(char *src)
{
	unsigned int	k;

	k = 0;
	while (src[k] != '\0')
		k++;
	return (k);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size == 0)
		return (len(src));
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
		dest[i] = '\0';
	return (len(src));
}

/*
#include <stdio.h>
int main(void)
{
	char dest[100];
	char* src;

	src = "jipgagoshipda";
	printf("%d", ft_strlcpy(dest, src, 15));
	printf("%s\n", dest);
	return 0;
}
*/
