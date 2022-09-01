/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 11:04:37 by jonascim          #+#    #+#             */
/*   Updated: 2022/08/14 20:38:13 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	print_line(char a, char b, int d);
void	ft_putchar(char c);

void	print_line(char a, char b, int d)
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

int	rush02(int x, int y)
{
	int	my;

	my = 1;
	while (my <= y && x > 0 && y > 0)
	{
		if (my < y && my > 1)
		{
			print_line('B', ' ', x);
		}
		else
		{
			if (my == y && y > 1)
			{
				print_line('C', 'B', x);
			}
			else
			{
				print_line('A', 'B', x);
			}
		}
		my++;
	}
	return (0);
}
