/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combT.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 21:35:15 by jonascim          #+#    #+#             */
/*   Updated: 2022/08/11 23:30:51 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putchar_triple(char d, char e, char f)
{
	ft_putchar(d);
	ft_putchar(e);
	ft_putchar(f);
}

void	ft_print_comb(void)
{
	char	x;
	char	y;
	char	z;

	x = '0';
	while (x <= '7', x++)
	{
		y = x + 1;
		while (y <= '8', y++)
		{
			z = y + 1;
			while (z <= '9', z++)
			{
				ft_putchar_triple(x, y, z);
				if (x == '7' && y == '8' && z == '9')
				{
					write(1, "\n", 1);
				}
				else
				{
					write(1, ", ", 2);
				}
			}
		}
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
