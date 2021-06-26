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
					write(1, "A\n", 1);
					l++;
					break;
				}
				if (i == 1)
				{
					write(1, "A", 1);
					i++;
				}
				else if (i == x)
				{
					write(1, "A\n", 2);
					l++;
					break;
				}
				else
				{
					write(1, "B", 1);
					i++;
				}
		}
		else if (l == y)
		{
			j = 1;
			while (j <= x)
				if (j == 1 && j == x)
				{
					write(1, "A\n", 1);
					l++;
					break;
				}
				if (j == 1)
				{
					write(1, "A", 1);
					i++;
				}
				else if (j == x)
				{
					write(1, "A\n", 2);
					l++;
					break;
				}
				else
				{
					write(1, "B", 1);
					j++;
				}
			
		}
		else
		{
			k = 1;
			while (k <= x)
				if (k == 1 && k == x)
				{
					write(1, "B\n", 1);
					l++;
					break;
				}
				if (k == 1)
				{
					write(1, "B", 1);
					k++;
				}
				else if (k == x)
				{
					write(1, "B\n", 2);
					l++;
					break;
				}
				else
				{
					write(1, " ", 1);
					k++;
				}
		}

	}
}

/*ENDS HERE*/
int		main(void)
{
	rush(5, 3);
	return (0);
}
