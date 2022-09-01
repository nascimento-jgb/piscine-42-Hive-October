/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantuatest.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 21:31:40 by jonascim          #+#    #+#             */
/*   Updated: 2022/08/14 23:20:29 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	calc_base(int h)
{
	int aux;
	int calc;


	aux = 1;
	calc = 3;
	while (aux <= h)
	{
		calc = calc + 2;
		aux++;
	}
	return calc;
}

int	calc_lines(int size)
{
	int aux;
	int index;
	int lines;

	lines = size + 2;
	index = size;

	while (index > 1)
	{
		lines = lines + (index -1) + 2;
		index--;
	}
	return (lines);
}

int	main(void)
{
	int test;

	test = 2;
	calc_lines(test);
	printf("%d", calc_lines(test));
	printf("\n");
	printf("%d", calc_base(3));
	return (0);
}
