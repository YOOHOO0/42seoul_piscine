/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoshin <seoshin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 20:57:58 by seoshin           #+#    #+#             */
/*   Updated: 2022/05/03 12:44:22 by seoshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	get_row(char *str, char *charset)
{
	int	i;
	int	row;

	i = 0;
	row = 0;
	while (str[i])
	{
		while (str[i] && is_charset(str[i], charset))
			i++;
		if (str[i] && !is_charset(str[i], charset))
		{
			row++;
			while (str[i] && !is_charset(str[i], charset))
				i++;
		}
	}
	return (row);
}

char	*w_malloc(char *str, char *charset, int size)
{
	int		idx;
	char	*word;

	word = (char *)malloc(size + 1);
	if (!word)
		return (0);
	idx = 0;
	while (str[idx] && !is_charset(str[idx], charset))
	{
		word[idx] = str[idx];
		idx++;
	}
	word[idx] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		k;
	int		size;
	char	**result;

	result = (char **)malloc(sizeof(char *) * (get_row(str, charset) + 1));
	if (!result)
		return (0);
	k = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && is_charset(str[i], charset))
			i++;
		if (str[i] && !is_charset(str[i], charset))
		{
			size = 0;
			while (str[i + size] && !is_charset(str[i + size], charset))
				size++;
			result[k++] = w_malloc(&str[i], charset, size);
			i += size;
		}
	}
	result[k] = 0;
	return (result);
}
