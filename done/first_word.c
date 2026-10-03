/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belam <belam@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 19:23:44 by belam             #+#    #+#             */
/*   Updated: 2026/08/13 17:17:06 by belam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int a)
{
	write(1, &a, 1);
}

// edge case: tab at the beginning but there is a word ahead
// the only time when space or tab allows loop to break is when first word has been found
// otherwise only '\0' will break the loop
void	first_word(char *s)
{
	int	found_word = 0;

	while (*s)
	{
		if (*s != ' ' && *s != '\t')
		{
			ft_putchar(*s);
			found_word = 1;
		}
		else
		{
			if (found_word)
				break;
		}
		s++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
		first_word(argv[1]);
	ft_putchar('\n');
}
