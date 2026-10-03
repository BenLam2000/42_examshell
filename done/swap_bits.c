/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belam <belam@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 20:28:36 by belam             #+#    #+#             */
/*   Updated: 2026/09/16 20:32:55 by belam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	swap_bits(unsigned char octet)
{
	unsigned char temp;

	temp = octet & 0xF0;
	temp >>= 4;
	octet <<= 4;
	octet |= temp;
	return (octet);
}
