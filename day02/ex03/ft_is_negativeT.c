/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 17:38:05 by jonascim          #+#    #+#             */
/*   Updated: 2022/08/11 18:51:47 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(char d)
{
	if (d >= '0')
	{
		ft_putchar('P');
	}
	else
	{
		ft_putchar('N');
	}
}

int	main(int n)
{
	char	j;

	j = 'n';
	ft_is_negative(j);
	return (0);
}
