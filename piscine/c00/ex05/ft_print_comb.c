#include <unistd.h>

void	ft_print_comb(void)
{
    int single;
    int tens;
    int hundreds;

    single = 47;
    while (++single <=57)
    {
        tens = single;
	while (tens++ <= 57)
	{
	    hundreds = tens;
	    while (++hundreds <= 57)
	    {
	        write(1, &single, 1);
		write(1, &tens, 1);
		write(1, &hundreds, 1);
		if (single != 55)
			write(1, ", ", 2);
	    }
	}
    }
}

int	main()
{
    ft_print_comb();
    return (0);
}
