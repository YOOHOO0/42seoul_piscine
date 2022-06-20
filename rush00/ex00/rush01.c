void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	a;
	int	b;

	if (x < 1 || y < 1)
		return ;
	b = 1;
	while (b <= y)
	{
		a = 1;
		while (a <= x)
		{
			if ((a == 1 && b == 1) || (a == x && b == y && a != 1 && b != 1))
				ft_putchar('/');
			else if ((a == x && b == 1) || (a == 1 && b == y))
				ft_putchar('\');
			else if ((a > 1 && b > 1) && (a < x && b < y))
				ft_putchar(' ');
			else
				ft_putchar('*');
			a++;
		}
		ft_putchar('\n');
		b++;
	}
}
