/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belam <belam@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 20:06:09 by belam             #+#    #+#             */
/*   Updated: 2026/08/08 20:18:21 by belam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void 	ft_putchar(int a)
{
	write(1, &a, 1);
}

void	rot_13(char *s)
{
	int	a;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
		{
			a = *s + 13;
			if (a > 'z')
				a -= 26;
		}
		else if (*s >= 'A' && *s <= 'Z')
		{
			a = *s + 13;
			if (a > 'Z')
				a -= 26;
		}
		else
			a = *s;
		ft_putchar(a);
		s++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
		rot_13(argv[1]);
	ft_putchar('\n');
}
