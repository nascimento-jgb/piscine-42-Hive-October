/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   firstrush.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 19:57:16 by jonascim          #+#    #+#             */
/*   Updated: 2022/08/28 17:35:42 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

int	(*g_rush[5])(int, int) = {rush00, rush01, rush02, rush03, rush04};

int	check_rush(int a, int b, char **str)
{
	if (!ft_strcmp(str[1], "rush-00"))
		return ((*g_rush[0])(a, b));
	else if (!ft_strcmp(str[1], "rush-01"))
		return ((*g_rush[1])(a, b));
	else if (!ft_strcmp(str[1], "rush-02"))
		return ((*g_rush[2])(a, b));
	else if (!ft_strcmp(str[1], "rush-03"))
		return ((*g_rush[3])(a, b));
	else if (!ft_strcmp(str[1], "rush-04"))
		return ((*g_rush[4])(a, b));
	else
		return (0);
}

int	main(int argc, char **argv)
{
	int	value1;
	int	value2;

	value1 = ft_atoi(argv[2]);
	value2 = ft_atoi(argv[3]);
	if (argc != 4)
		return (write(1, "None\n", 5));
	else if (!ft_strcmp(argv[1], "rush-00") || !ft_strcmp(argv[1], "rush-01"))
	{
		check_rush(value1, value2, argv);
	}
	else if (!ft_strcmp(argv[1], "rush-02") || !ft_strcmp(argv[1], "rush-03"))
	{
		check_rush(value1, value2, argv);
	}
	else if (!ft_strcmp(argv[1], "rush-04"))
	{
		check_rush(value1, value2, argv);
	}
	else
		write(1, "None\n", 5);
	return (0);
}
