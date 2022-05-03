/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 11:06:04 by seoshin           #+#    #+#             */
/*   Updated: 2022/04/24 18:11:50 by seoshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (!(s1[i] == '\0' && s2[i] == '\0'))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/*
int main(void)
{
	char *str1 = "samesamei";
	char *str2 = "samesame";
	char *str3 = "samelame";
	char *str4 = "sameaime";
	printf("%d ", ft_strcmp(str1, str2));
	printf("%d ", ft_strcmp(str3, str4));
	printf("%d ", strcmp(str1, str2));
	printf("%d ", strcmp(str3, str4));
	return 0;
}
*/
