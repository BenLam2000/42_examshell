/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belam <belam@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 18:53:57 by belam             #+#    #+#             */
/*   Updated: 2026/08/08 19:20:02 by belam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int a)
{
	write(1, &a, 1);
}

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	search_and_replace(char *s, char to_replace, char replace_with)
{
	while (*s)
	{
		if (*s == to_replace)
			ft_putchar(replace_with);
		else
			ft_putchar(*s);
		s++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 4 && ft_strlen(argv[2]) == 1 && ft_strlen(argv[3]) == 1)
		search_and_replace(argv[1], argv[2][0], argv[3][0]);
	ft_putchar('\n');
}
