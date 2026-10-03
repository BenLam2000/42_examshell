/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belam <belam@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 17:19:05 by belam             #+#    #+#             */
/*   Updated: 2026/08/13 17:37:23 by belam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// question allows atoi, printf, write
// so no need to make custom atoi and ft_putchar or ft_putnbr

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

// since result of op fits in int, no need check overflow/underflow
int	do_op(int num1, char op, int num2)
{
	if (op == '*')
		return (num1 * num2);
	else if (op == '/')
		return (num1 / num2);
	else if (op == '+')
		return (num1 + num2);
	else if (op == '-')
		return (num1 - num2);
	else
		return (0);
}

// edge case: operator is not "+-*/", return 0
// since assume string has no mistakes, safe to just use usual atoi
// no need to validate that argv[2] is a single character
int	main(int argc, char *argv[])
{
	if (argc == 4)
		printf("%d", do_op(atoi(argv[1]), argv[2][0], atoi(argv[3])));
	printf("\n");
}
