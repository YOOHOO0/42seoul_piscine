/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 17:01:49 by seoshin           #+#    #+#             */
/*   Updated: 2022/04/23 11:25:43 by seoshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{	
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(32 <= str[i] && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}

/*
int main(void)
{
	char *str1 = " ";
	char *str2 = "fs  dT";
	char *str3 = "A213 DD2Z";
	char *str4 = "ABC D E";
	char *str5 = "\0";
	printf("%d ", ft_str_is_printable(str1));
	printf("%d ", ft_str_is_printable(str2));
	printf("%d ", ft_str_is_printable(str3));
	printf("%d ", ft_str_is_printable(str4));
	printf("%d ", ft_str_is_printable(str5));
	return 0;
}
*/
