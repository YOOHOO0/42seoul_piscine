#include <stdlib.h>
#include "ft_stock_str.h"

int len(char* str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return i;
}

char* ft_strdup(char* str)
{
	int i;
	char *result;

	result = (char*)malloc(len(str) + 1);
	i = 0;
	while (str[i])
	{
		result[i] = str[i];
		i++;
	}
	result[i] = '\0';
	return result;
}

struct s_stock_str* ft_strs_to_tab(int ac, char **av)
{
	int i;

	struct s_stock_str *arr = (t_stock_str*)malloc(sizeof(t_stock_str) * (ac + 1));

	i = 0;
	while (i < ac)
	{
		arr[i].size = len(av[i]);
		arr[i].str = av[i];
		arr[i].copy = ft_strdup(av[i]);
		i++;
	}
	arr[i].str = 0;
	return arr;
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
	return 0;
}
*/
