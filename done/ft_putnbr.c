#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void ft_putnbr(int num)
{
	long num_long;

	num_long = num;
	if (num_long < 0)
	{
		ft_putchar('-');
		num_long = -num_long;
	}
	if (num_long >= 10)
		ft_putnbr(num_long / 10);
	ft_putchar('0' + num_long % 10);
}

#include <stdlib.h>
int	main(int argc, char *argv[])
{
	if (argc == 2)
		ft_putnbr(atoi(argv[1]));

	return (0);
}
