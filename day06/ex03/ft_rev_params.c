/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 16:58:00 by jonascim          #+#    #+#             */
/*   Updated: 2022/08/17 23:38:51 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	aux;

	aux = 0;
	while (str[aux] != '\0')
	{
		ft_putchar(str[aux]);
		aux++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = argc;
	while (i-- > 1)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
	}
	return (0);
}
