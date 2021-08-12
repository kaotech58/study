#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

typedef	struct	s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

typedef struct	s_split_next
{
	size_t start;
	size_t length;
}				t_split_next;

void	ft_putchar(char c);

void	ft_putchar_fd(char c, int fd);

void	ft_putnbr(int n);

void	ft_putnbr_fd(int n, int fd);

#endif
