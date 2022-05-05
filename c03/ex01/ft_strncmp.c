/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 11:04:13 by seoshin           #+#    #+#             */
/*   Updated: 2022/05/01 17:58:06 by seoshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((i < n) && !(s1[i] == '\0' && s2[i] == '\0'))
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
	char *str1 = "samesame";
	char *str2 = "samesamesamelame";
	char *str3 = "samelame";
	char *str4 = "sameaime";
	printf("%d ", ft_strncmp(str1, str2, 8));
	printf("%d ", ft_strncmp(str1, str2, 9));
	printf("%d ", ft_strncmp(str3, str4, 1));
	printf("%d ", ft_strncmp(str3, str4, 5));
	printf("%d ", ft_strncmp(str1, str2, 30));
	printf("%d ", strncmp(str1, str2, 8));
	printf("%d ", strncmp(str1, str2, 9));
	printf("%d ", strncmp(str3, str4, 1));
	printf("%d ", strncmp(str3, str4, 5));
	printf("%d ", strncmp(str1, str2, 30));

	return 0;
}
*/
