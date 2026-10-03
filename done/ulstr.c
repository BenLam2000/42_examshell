/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belam <belam@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 16:53:35 by belam             #+#    #+#             */
/*   Updated: 2026/08/13 17:00:04 by belam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int a)
{
	write(1, &a, 1);
}

void	ulstr(char *s)
{
	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			ft_putchar(*s - ('a' - 'A'));
		else if (*s >= 'A' && *s <= 'Z')
			ft_putchar(*s + ('a' - 'A'));	
		else
			ft_putchar(*s);
		s++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
		ulstr(argv[1]);
	ft_putchar('\n');

	return (0);
}
