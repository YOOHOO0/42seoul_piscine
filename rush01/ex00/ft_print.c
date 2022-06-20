#include <unistd.h>

void	print(int **arr)
{
	int		i;
	int		j;
	char	n;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			n = arr[i][j] + '0';
			write(1, &n, 1);
			if (j != 3)
				write(1, " ", 1);
			j++;
		}
		if (i != 3)
			write(1, "\n", 1);
		i++;
	}
	return ;
}
