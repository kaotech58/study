#include <unistd.h>

int	ft_putchar(char c)
{
    write(1, &c, 1);
    return (0);
}

int	main(void)
{
    ft_putchar('@');
    ft_putchar('\n');
    return (0);
}
