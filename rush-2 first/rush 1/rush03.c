/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 20:17:26 by jonascim          #+#    #+#             */
/*   Updated: 2022/08/27 12:40:55 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

void	print_acline(char a, char b, int d)
{
	int	mx;

	mx = 1;
	while (mx <= d)
	{
		if (mx == d && d != 1)
		{
			ft_putchar('C');
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
	ft_putchar('\n');
}

void	print_line03(char a, char b, int d)
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

int	rush03(int x, int y)
{
	int	my;

	my = 1;
	while (my <= y && x > 0 && y > 0)
	{
		if (my < y && my > 1)
		{
			print_line03('B', ' ', x);
		}
		else
		{
			print_acline('A', 'B', x);
		}
		my++;
	}
	return (0);
}
