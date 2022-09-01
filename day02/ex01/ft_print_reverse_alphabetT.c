/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 16:43:54 by jonascim          #+#    #+#             */
/*   Updated: 2022/08/11 16:51:12 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(char c1)
{
	while (c1 >= 'a')
	{
		ft_putchar(c1);
		c1--;
	}
}

int	main(void)
{
	char	c2;

	c2 = 'z';
	ft_print_reverse_alphabet(c2);
	return (0);
}
