/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 16:52:09 by seoshin           #+#    #+#             */
/*   Updated: 2022/04/23 22:33:28 by seoshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}

/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	dest[20]= "aaaaaaaaaaaa";
	char	src[20] = "jip";

	char dest1[20] = "aaaaaaaaaaaaaaa";
	char src1[20] = "jip";
	printf("%s\n", ft_strncpy(dest, src, 5));
	printf("%s\n", strncpy(dest1, src1, 5));
	printf("%c\n",dest[8]);
	printf("%c\n",dest1[8]);
	return (0);
}
*/
