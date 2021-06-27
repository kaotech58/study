void	ft_putchar(char c);

void	rows(int x, char start, char middle, char end)
{
	int	count;

	count = 1;
	while (count <= x)
	{
		if (count == 1 && count == x)
		{
			ft_putchar(start);
			ft_putchar('\n');
			break;
		}
		else if (count == 1)
		{
			ft_putchar(start);
			count++;
		}
		else if (count == x)
		{
			ft_putchar(end);
			ft_putchar('\n');
			break;
		}
		else
		{
			ft_putchar(middle);
			count++;
		}
	}

}

void	rush(int x, int y)
{
	int	count;

	count = 1;
	while (count <= y)
	{
		if (count == 1)
		{
			rows(x, 'A', 'B', 'A');
			count++;
		}
		else if (count == y)
		{
			rows(x, 'C', 'B', 'C');
			count++;
		}
		else
		{
			rows(x, 'B', ' ', 'B');
			count++;
		}

	}
}
