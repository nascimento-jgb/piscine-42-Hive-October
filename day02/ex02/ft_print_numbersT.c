/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 16:55:12 by jonascim          #+#    #+#             */
/*   Updated: 2022/08/11 17:34:59 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char j)
{
	write(1, &j, 1);
}

void	ft_print_numbers(char i)
{
	while (i <= '9')
	{
		ft_putchar(i);
		i++;
	}
}

int	main(void)
{
	char	s;

	s = '0';
	ft_print_numbers(s);
	return (0);
}
