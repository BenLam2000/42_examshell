/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belam <belam@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 18:41:04 by belam             #+#    #+#             */
/*   Updated: 2026/08/08 18:48:58 by belam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int a)
{
	write(1, &a, 1);
}

void	repeat_alpha(char *s)
{
	int	repeat;
	int	i;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
		{
			repeat = *s - 'a' + 1;
			i = 0;
			while (i < repeat)
			{
				ft_putchar(*s);
				i++;
			}
		}
		else if (*s >= 'A' && *s <= 'Z')
		{
			repeat = *s - 'A' + 1;
			i = 0;
			while (i < repeat)
			{
				ft_putchar(*s);
				i++;
			}
		}
		else
			ft_putchar(*s);
		s++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
		repeat_alpha(argv[1]);
	ft_putchar('\n');
}
