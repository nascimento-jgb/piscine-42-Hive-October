/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 12:11:22 by jonascim          #+#    #+#             */
/*   Updated: 2022/08/26 12:25:54 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void putchar(char c)
{
	write(1, &c, 1);
}

void	putnbr(int nb)
{
	if (nb = - 2147483648)
	{
		putchar("-");
		putchar("2");
		putnbr(147483648);
	}
	else if (nb < 0)
	{
		putchar("-");
		putnbr (-nb);
	}
	else if (nb > 9)
	{
		putnbr(nb / 10);
		putnbr(nb % 10);
	}
	else
		putchar (nb + '0');
}
