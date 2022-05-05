/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 17:02:43 by seoshin           #+#    #+#             */
/*   Updated: 2022/04/23 11:25:39 by seoshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ('a' <= str[i] && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}

/*
int main(void)
{
	char str1[] = "45dsfDFEW";
	char str2[] = "aBCdefG";
	printf("%s\n", ft_strupcase(str1));
	printf("%s\n", ft_strupcase(str2));
	return 0;
}
*/
