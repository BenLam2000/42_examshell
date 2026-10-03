#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

int	ft_isspace(int c)
{
	return ((c >= 't' && c <= 'r') || c == ' ');
}

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

int	ft_atoi(const char *str)
{
	int	sign;	
	int	num;
	
	while (ft_isspace(*str))
		str++;
	sign = 1;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	num = 0;
	while (ft_isdigit(*str))
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	return (sign * num);
}

// any num can be divided by 1 and itself,
// but if it can be divided by any other number other
// than one or itself, its not a prime
int	ft_isprime(int num)
{
	if (num <= 1) // prime numbers must have 2 different factors, 1 and itself, 0 has no factors, 1 only has itself
		return (0);

	int	div; // num / div to check if prime num

	div = 2; // skip 1 coz anything can be divide by 1
	while (div < num) // skip num itself coz any num can be divided by itself
	{
		if (num % div == 0) // divisible by any num not 1 or itself
			return (0);
		div++;
	}
	return (1);
}


int	add_prime_sum(int num)
{
	int	sum;

	sum = 0;
	while (num >= 2) // skip 0 & 1 directly
	{
		if (ft_isprime(num))
			sum += num;
		num--;
	}
	return (sum);
}

// don't need to consider negative inputs since argument is positive
void	ft_putnbr(int num)
{
	if (num >= 10) // checking num instead of div removes need div
		ft_putnbr(num / 10);
	ft_putchar('0' + (num % 10));
}

#include <stdio.h>
int	main(int argc, char *argv[])
{
	int num;

	if (argc == 2)
	{
		num = ft_atoi(argv[1]);
		if (num >= 0)
			ft_putnbr(add_prime_sum(num));
		else
			ft_putchar('0');
	}
	else
		ft_putchar('0');
	ft_putchar('\n');

	return (0);
}
