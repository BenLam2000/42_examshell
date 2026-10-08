#include <stdio.h>
#include <stdlib.h>

int ft_isprime(int num)
{
	int i;

	i = 2;
	while (i < num)
	{
		if (num % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void fprime(int num)
{
	int div = num;
	int i;

	while (div > 1)
	{
		i = 2;
		while (i <= div)
		{
			if (ft_isprime(i) && div % i == 0)
			{
				if (div < num)
					printf("*");
				printf("%d", i);
				div = div / i;
				break;
			}
			i++;
		}
	}
}

int main(int argc, char *argv[])
{
	if (argc == 2)
		fprime(atoi(argv[1]));
	printf("\n");

	return (0);
}
