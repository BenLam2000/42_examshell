/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belam <belam@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 12:29:16 by belam             #+#    #+#             */
/*   Updated: 2026/08/08 18:38:20 by belam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int a)
{
	write(1, &a, 1);
}

void	rotone(char *s)
{
	char	a;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
		{
			a = *s + 1;
			if (a > 'z')
				a = a - ('z' - 'a' + 1);
			ft_putchar(a);
		}
		else if (*s >= 'A' && *s <= 'Z')
		{
			a = *s + 1;
			if (a > 'Z')
				a = a - ('Z' - 'A' + 1);
			ft_putchar(a);
		}
		else
			ft_putchar(*s);
		s++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
		rotone(argv[1]);
	ft_putchar('\n');
}
