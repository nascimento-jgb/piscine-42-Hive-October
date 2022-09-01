/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 11:04:37 by jonascim          #+#    #+#             */
/*   Updated: 2022/08/27 12:40:55 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

void	print_accaline(char a, char b, char c, int d)
{
	int	mx;

	mx = 1;
	while (mx <= d)
	{
		if (mx == d && d != 1)
		{
			ft_putchar(c);
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

void	print_line04(char a, char b, int d)
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

int	rush04(int x, int y)
{
	int	my;

	my = 1;
	while (my <= y && x > 0 && y > 0)
	{
		if (my > 1 && my < y)
		{
			print_line04('B', ' ', x);
		}
		else
		{
			if (my == 1)
			{
				print_accaline('A', 'B', 'C', x);
			}
			else
			{
				print_accaline('C', 'B', 'A', x);
			}
		}
		my++;
	}
	return (0);
}
