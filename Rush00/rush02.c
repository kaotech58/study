#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
/*STARTS HERE */

void	rush(int x, int y)
{
	int i;
	int j;
	int k;
	int l;

	l = 1;
	while (l <= y)
	{
		if (l == 1)
		{
			i = 1;
			while (i <= x)
				if (i == 1 && i == x)
				{
					ft_putchar('A');
					ft_putchar('\n');
					l++;
					break;
				}
				else if (i == 1)
				{
					ft_putchar('A');
					i++;
				}
				else if (i == x)
				{
					ft_putchar('A');
					ft_putchar('\n');
					l++;
					break;
				}
				else
				{
					ft_putchar('B');
					i++;
				}
		}
		else if (l == y)
		{
			j = 1;
			while (j <= x)
				if (j == 1 && j == x)
				{
					ft_putchar('C');
					ft_putchar('\n');
					l++;
					break;
				}
				else if (j == 1)
				{
					ft_putchar('C');
					j++;
				}
				else if (j == x)
				{
					ft_putchar('C');
					ft_putchar('\n');
					l++;
					break;
				}
				else
				{
					ft_putchar('B');
					j++;
				}
			
		}
		else
		{
			k = 1;
			while (k <= x)
				if (k == 1 && k == x)
				{
					ft_putchar('B');
					ft_putchar('\n');
					l++;
					break;
				}
				else if (k == 1)
				{
					ft_putchar('B');
					k++;
				}
				else if (k == x)
				{
					ft_putchar('B');
					ft_putchar('\n');
					l++;
					break;
				}
				else
				{
					ft_putchar(' ');
					k++;
				}
		}

	}
}

/*ENDS HERE*/
int		main(void)
{
	rush(5, 1);
	return (0);
}
