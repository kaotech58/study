#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	a = 10;
	b = 5;
	*div = a / b;
	*mod = a % b;
}

int	main(void)
{
	int div;
	int mod;

	ft_putchar(div);
	ft_putchar(mod);
}
