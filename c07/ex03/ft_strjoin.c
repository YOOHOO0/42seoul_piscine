/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoshin <seoshin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 15:25:06 by seoshin           #+#    #+#             */
/*   Updated: 2022/05/03 11:24:21 by seoshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	strs_len(char **strs, int size)
{
	int	i;
	int	j;
	int	len;

	len = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != 0)
		{
			len++;
			j++;
		}
		i++;
	}
	return (len);
}

int	sep_len(char *sep)
{
	int	i;
	int	len;

	len = 0;
	i = 0;
	while (sep[i] != 0)
		i++;
	return (i);
}

char	*ft_copy(int size, char **strs, char *sep, char *result)
{
	int	i;
	int	j;
	int	k;

	k = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			result[k++] = strs[i][j++];
		j = 0;
		if (i != size - 1)
		{
			while (sep[j])
				result[k++] = sep[j++];
		}
		i++;
	}
	result[k] = '\0';
	return (result);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;

	if (size == 0)
	{
		result = (char *)malloc(1);
		if (!result)
			return (0);
		result[0] = '\0';
		return (result);
	}
	result = (char *)malloc((strs_len(strs, size)
				+ (size - 1) * (sep_len(sep)) + 1));
	if (!result)
		return (0);
	return (ft_copy(size, strs, sep, result));
}

/*
#include <stdio.h>
int main(void)
{
	char *strs[3] = {"abc", "defh", "ijk"};
	printf("%s", ft_strjoin(3, strs, "000"));
	return 0;
}
*/
