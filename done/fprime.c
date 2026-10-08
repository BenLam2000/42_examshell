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

	while (div > 1) // divided until 1 means no more prime factors, coz lowest prime number is 2
	{
		i = 2; // skip 0 & 1 , not prime
		while (i <= div) // try all possible numbers
		{
			if (ft_isprime(i) && div % i == 0) // search for prime number that can be exactly divided
			{
				// print prime factors
				if (div < num) // only print * after first division
					printf("*");
				printf("%d", i);
				div = div / i; // update divisor for next round
				break; // already found a factor, restart
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
