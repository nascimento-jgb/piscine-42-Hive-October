/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 19:57:16 by jonascim          #+#    #+#             */
/*   Updated: 2022/08/28 17:53:52 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush00(int x, int y);
int		ft_atoi(char *str);

int	main(int argc, char **argv)
{
	int a;
	int	b;

	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[2]);
	if(argc == 3)
	{
		rush00(a, b);
	}
	else
		write(1, "none\n", 5);
	return (0);
}
