/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 16:33:24 by jonascim          #+#    #+#             */
/*   Updated: 2022/08/11 16:39:05 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(char c1)
{
	while (c1 <= 'z')
	{
		ft_putchar(c1);
		c1++;
	}
}

int	main(void)
{
	char	c2;

	c2 = 'a';
	ft_putchar('\n');
	ft_print_alphabet(c2);
	return (0);
}
