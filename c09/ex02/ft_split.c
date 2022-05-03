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

/*
#include <stdio.h>

int main()
{
	 printf("-------ex05-------\n\n");
    char **ex05_split1;
    char **ex05_split2;
    char **ex05_split3;
	char *ex05_str1 = "hello my name is hunpark!";
	char *ex05_str2 = "good@day!cat#dog!vim12!";
	char *ex05_str3 = "i1my2me3mine4you5your6you7yours";



	ex05_split1 = ft_split(ex05_str1, " ");
    ex05_split2 = ft_split(ex05_str2, "@!#");
    ex05_split3 = ft_split(ex05_str3, "1234567");
    printf("---test1---\n");
	for (int j = 0; j < 5; j++)
	{
		printf("%s\n", ex05_split1[j]);
	}
    printf("\n\n");
    printf("---test2---\n");
    for (int j = 0; j < 5; j++)
	{
		printf("%s\n", ex05_split2[j]);
	}
    printf("\n\n");
    printf("---test3---\n");
    for (int j = 0; j < 8; j++)
	{
		printf("%s\n", ex05_split3[j]);
	}
    printf("\n\n");
	free(ex05_split1);
    free(ex05_split3);
    free(ex05_split2);
}
*/
