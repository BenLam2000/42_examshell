/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belam <belam@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 20:04:53 by belam             #+#    #+#             */
/*   Updated: 2026/09/16 20:18:19 by belam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// method 1: /2 and get rem 0 until reach 1(power of 2), or get rem 1 halfway (not power of 2)
// method 2: create ft_power, trial and error from 2^1 until land exactly on n (power of 2), or overshoot (not power of 2)
int	is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);

	while (n > 1)
	{
		if (n % 2 == 1)
			return (0);
		n = n / 2;
	}
	return (1);
}
