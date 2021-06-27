#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void rows(int x, char start, char middle, char end)
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

int		main(void)
{
	rush(25, 15);
	return (0);
}
