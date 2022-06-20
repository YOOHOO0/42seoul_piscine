#include <stdlib.h>

extern char	**ft_split(char *str);
extern int	ft_atoi(char *str);

char	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

char	ft_check_all_words_digit(char **words)
{
	size_t	idx;

	idx = 0;
	while (words[idx])
	{
		if (!ft_str_is_numeric(words[idx]))
			return (0);
	}
	return (1);
}

int	**ft_get_col_row_val(char *str)
{
	char				**rows_cols;
	int					**result;
	unsigned long int	idx;

	rows_cols = ft_split(str);
	result = NULL;
	if (!ft_check_all_words_digit(rows_cols))
		return (result);
	idx = 0;
	while (rows_cols[idx])
		idx++;
	if (idx == 16)
	{
		idx = 0;
		result = (int **)malloc(sizeof(int *) * 4);
		while (idx < 4)
			result[idx++] = (int *)malloc(sizeof(int) * 4);
		idx = 0;
		while (idx < 16)
		{
			result[idx / 4][idx % 4] = ft_atoi(rows_cols[idx]);
			idx++;
		}
	}
	return (result);
}

void	ft_solve_problem(char *str)
{
	unsigned long int	idx;
	int					**rows_cols;

	idx = 0;
	rows_cols = ft_get_col_row_val(str);
	if (rows_cols == NULL)
		return ;
}
