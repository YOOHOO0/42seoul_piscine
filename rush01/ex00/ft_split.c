/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juneykim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 13:22:42 by juneykim          #+#    #+#             */
/*   Updated: 2022/04/23 14:34:14 by juneykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	ft_check_char_sep(char ch)
{
	return ((ch == '\0' || ch == ' ' || ch == '\n' || ch == '\t'));
}

size_t	ft_word_len(char *str)
{
	size_t	str_idx;

	str_idx = 0;
	while (!ft_check_char_sep(str[str_idx]))
		str_idx++;
	return (str_idx);
}

size_t	ft_get_word_num(char *str)
{
	size_t	word_num;
	size_t	str_idx;

	str_idx = 0;
	word_num = 0;
	while (str[str_idx])
	{
		while (str[str_idx] && ft_check_char_sep(str[str_idx]))
			str_idx++;
		if (str[str_idx])
			word_num++;
		while (str[str_idx] && !ft_check_char_sep(str[str_idx]))
			str_idx++;
	}
	return (word_num);
}

void	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	idx;

	idx = 0;
	while (idx + 1 < size)
	{
		if (src[idx])
			dest[idx] = src[idx];
		else
			dest[idx] = '\0';
		idx++;
	}
	dest[idx] = '\0';
}

char	**ft_split(char *str)
{
	char	**words;
	size_t	word_num;
	size_t	str_idx;
	size_t	word_len;

	word_num = ft_get_word_num(str);
	words = (char **)malloc(sizeof(char *) * (word_num + 1));
	str_idx = 0;
	word_num = 0;
	while (str[str_idx])
	{
		while (str[str_idx] && ft_check_char_sep(str[str_idx]))
			str_idx++;
		if (str[str_idx])
		{
			word_len = ft_word_len(str);
			words[word_num] = (char *)malloc(ft_word_len(str) + 1);
			ft_strlcpy(words[word_num], str + str_idx, word_len + 1);
			word_num++;
		}
		while (str[str_idx] && !ft_check_char_sep(str[str_idx]))
			str_idx++;
	}
	words[word_num] = NULL;
	return (words);
}
