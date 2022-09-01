/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 11:04:37 by jonascim          #+#    #+#             */
/*   Updated: 2022/08/27 12:40:55 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

void	print_line00(char a, char b, int d)
{
	int	mx;

	mx = 1;
	while (mx <= d)
	{
		if (d == 1 || mx == d)
		{
			ft_putchar(a);
			ft_putchar('\n');
		}
		else
		{
			if (mx != 1 && mx < d)
			{
				ft_putchar(b);
			}
			else
			{
				ft_putchar(a);
			}
		}
		mx++;
	}
}

int	rush00(int x, int y)
{
	int	my;

	my = 1;
	while (my <= y && x > 0 && y > 0)
	{
		if (my < y && my > 1)
		{
			print_line00('|', ' ', x);
		}
		else
		{
			print_line00('o', '-', x);
		}
		my++;
	}
	return (0);
}
