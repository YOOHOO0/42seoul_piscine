#include <stdlib.h>

int	**write_col(int **board, int **sequ, int side, int next)
{
	int	i;
	int	idx;

	idx = -1;
	while (++idx < 4)
	{
		i = (side % 2) * 3;
		if (sequ[side][idx] == 1)
		{
			board[i][idx] = 4;
			if (sequ[side + next][idx] == 2)
				board[(1 - (side % 2)) * 3][idx] = 3;
		}
		else if (sequ[side][idx] == 4)
		{
			while (i < 4 && i >= 0)
			{
				board[i][idx] = i + 1;
				i += next;
			}
		}
		else if (sequ[side][idx] == 2 && sequ[side + next][idx] == 3)
			board[2 - (side % 2)][idx] = 4;
	}
	return (board);
}

int	**write_row(int **board, int **sequ, int side, int next)
{
	int	i;
	int	idx;

	idx = -1;
	while (++idx < 4)
	{
		i = (side % 2) * 3;
		if (sequ[side][idx] == 1)
		{
			board[idx][i] = 4;
			if (sequ[side + next][idx] == 2)
				board[idx][1 - (side % 2) * 3] = 3;
		}
		else if (sequ[side][idx] == 4)
		{
			while (i < 4 && i >= 0)
			{
				board[idx][i] = i + 1;
				i += next;
			}
		}
		else if (sequ[side][idx] == 2 && sequ[side + next][idx] == 3)
			board[idx][2 - (side % 2)] = 4;
	}
	return (board);
}

int	**ft_setboard(int **board, int **str)
{
	int	side;
	int	idx;
	int	i;

	side = 0;
	idx = 0;
	i = i ;
	while (side < 4)
	{
		if (side == 0)
			write_col(board, str, side, 1);
		else if (side == 1)
			write_col(board, str, side, -1);
		else if (side == 2)
			write_row(board, str, side, 1);
		else if (side == 3)
			write_row(board, str, side, -1);
		side++;
	}
	return (board);
}

int	**ft_makeboard(int **str)
{
	int	i;
	int	j;
	int	**board;

	i = 0;
	j = 0;
	board = (int **)malloc(sizeof(int *) * 4);
	while (i < 4)
	{
		board[i] = (int *)malloc(sizeof(int) * 4);
		while (j < 4)
		{
			board[i][j] = 0;
			j++;
		}
		i++;
	}
	ft_setboard(board, str);
	return (board);
}
