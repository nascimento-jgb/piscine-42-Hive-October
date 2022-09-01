/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 17:20:23 by jonascim          #+#    #+#             */
/*   Updated: 2022/08/23 10:33:17 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "func.h"

int	(*g_op[5])(int, int) = {sum, sub, mul, div, mod};

int	calculations(int a, int b, char **argv)
{
	if (!ft_strcmp(argv[2], "*"))
		return ((*g_op[2])(a, b));
	else if (!ft_strcmp(argv[2], "+"))
		return ((*g_op[0])(a, b));
	else if (!ft_strcmp(argv[2], "/"))
		return ((*g_op[3])(a, b));
	else if (!ft_strcmp(argv[2], "-"))
		return ((*g_op[1])(a, b));
	else if (!ft_strcmp(argv[2], "%"))
		return ((*g_op[4])(a, b));
	else
		return (0);
}

int	main(int argc, char **argv)
{
	int	value1;
	int	value2;

	if (argc != 4)
		return (0);
	else
	{
		value1 = ft_atoi(argv[1]);
		value2 = ft_atoi(argv[3]);
	}
	if (value2 == 0 && !ft_strcmp(argv[2], "/"))
		write(1, "Stop : division by zero", 23);
	else if (value2 == 0 && !ft_strcmp(argv[2], "%"))
		write(1, "Stop : modulo by zero", 21);
	else
		ft_putnbr(calculations(value1, value2, argv));
	write (1, "\n", 1);
	return (0);
}
