#include <stdlib.h>
#include <unistd.h>
#include "ft_stock_str.h"

int str_len(char* str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return i;
}

char* int2char(int num)
{
	char* result;
	int len;
	int temp;

	temp = num;
	len = 0;
	while (temp)
	{
		temp = temp / 10;
		len++;
	}
	result = (char*)malloc(len + 1);
	result[len--] = '\0';
	while (len >= 0)
	{
		result[len] = num % 10 + '0';
		num /= 10;
		len--;
	}
	return result;
}

int num_len(int num)
{
	int k;
	k = 0;
	if (num == 0)
		return 1;
	while(num > 0)
	{
		k++;
		num /= 10;
	}
	return k;
}

void ft_show_tab(struct s_stock_str* par)
{
	int i;

	i = 0;
	while (par[i].str)
	{
		write(1, par[i].str, str_len(par[i].str));
		write(1, "\n", 1);
		write(1, int2char(par[i].size), num_len(par[i].size));
		write(1, "\n", 1);
		write(1, par[i].copy, str_len(par[i].copy));
		write(1, "\n", 1);
		i++;
	}
}

/*
#include <stdio.h>

int main(int ac, char **av)
{
	int i;
	t_stock_str* arr;

	arr = ft_strs_to_tab(ac, av);
	i = 0;
	while(i < ac)
	{
		printf("%d\n", arr[i].size);
		printf("%s\n", arr[i].str);
		printf("%s\n", arr[i].copy);
		i++;
	}
	ft_show_tab(arr);
	return 0;
}
*/
