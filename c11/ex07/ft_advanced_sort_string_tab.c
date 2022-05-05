/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoshin <seoshin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 17:21:34 by seoshin           #+#    #+#             */
/*   Updated: 2022/05/04 17:35:16 by seoshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_word_cnt(char **tab)
{
	int	i;
	int	j;

	i = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[j])
			j++;
		i++;
	}
	return (i);
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		n;
	int		i;
	int		j;
	char	*temp;

	n = ft_word_cnt(tab);
	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n - 1 - i)
		{
			if (cmp(tab[j], tab[j + 1]) > 0)
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}
