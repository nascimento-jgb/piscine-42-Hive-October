/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 18:51:22 by jonascim          #+#    #+#             */
/*   Updated: 2022/08/27 12:40:55 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

void	print_header(char a, char b, char c, int d)
{
	int	mx;

	mx = 1;
	while (mx <= d)
	{
		if (d == 1 || mx == 1)
		{
			ft_putchar(a);
		}
		else
		{
			if (mx > 1 && mx < d)
			{
				ft_putchar(b);
			}
			else
			{
				ft_putchar(c);
			}
		}
		mx++;
	}
	ft_putchar('\n');
}

void	print_middle(char a, char b, int d)
{
	int	mx;

	mx = 1;
	while (mx <= d)
	{
		if (mx != 1 && mx < d)
		{
			ft_putchar(b);
		}
		else
		{
			ft_putchar(a);
		}
		mx++;
	}
	ft_putchar('\n');
}

int	rush01(int x, int y)
{
	int	my;

	my = 1;
	while (my <= y && x > 0 && y > 0)
	{
		if (my < y && my > 1)
		{
			print_middle('*', ' ', x);
		}
		else
		{
			if (my == y && y > 1)
			{
				print_header('\\', '*', '/', x);
			}
			else
			{
				print_header('/', '*', '\\', x);
			}
		}
		my++;
	}
	return (0);
}
