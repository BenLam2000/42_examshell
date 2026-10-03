#include <unistd.h>

void	ft_putchar(int a)
{
	write(1, &a, 1);
}


int	ft_strlen(const char *str)
{
	int	i = 0;

	while (str[i])
		i++;
	return (i);
}

void	rev_print(const char *str)
{
	int	i = ft_strlen(str) - 1; // start at index of last char

	if (i < 0) // emptry string
		return;
	
	while (i >= 0) // print backwards including first char
	{
		ft_putchar(str[i]);
		i--;
	}	
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
		rev_print(argv[1]);
	ft_putchar('\n');
	return (0);
}
