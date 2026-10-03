/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belam <belam@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 19:35:20 by belam             #+#    #+#             */
/*   Updated: 2026/09/15 20:40:57 by belam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int a)
{
	write(1, &a, 1);
}

int	ft_power(int num, int power)
{
	// check overflow
	int	result;

	result = 1;
	while (power > 0)
	{
		result *= num;
		power--;
	}
	return (result);
}

void	print_bits(unsigned char octet)
{
	int	bin_power;
	int	power;

	power = 7;
	while (power >= 0)
	{
		bin_power = ft_power(2, power);
		if (octet >= bin_power)
		{
			ft_putchar('1');
			octet -= bin_power; 
		}
		else
			ft_putchar('0');
		power--;
	}
}

/*
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char *argv[])
{
	if (argc != 2)
		return (1);
	
	print_bits(atoi(argv[1]));
	return (0);
}
*/
