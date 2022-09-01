/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_sqr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 15:40:39 by jonascim          #+#    #+#             */
/*   Updated: 2022/08/31 16:57:47 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	find_min(int a, int b)
{
	if (a > b)
		return (b);
	else if (a <= b)
		return (a);
	else
		return (0);
}

int	find_max(int a, int b)
{
	if (a > b)
		return (a);
	else if (b >= a)
		return (b);
	else
		return (0);
}

void	maximal_square(int **arr2, int line, int column)
{
	int	**dp;
	int	maxsqlen;
	int	i;
	int	j;

	dp = allocate_zeros(arr2, line, column);
	maxsqlen = 0;
	i = 1;
	j = 1;
	while (i < line + 1)
	{
		while (j < column + 1)
		{
			if (dp[i][j] == 1)
			{
				dp[i][j] = find_min(find_min(dp[i][j - 1], dp[i - 1][j]),
						dp[i - 1][j - 1]) + 1;
				maxsqlen = find_max(maxsqlen, dp[i][j]);
			}
			j++;
		}
		i++;
		j = 1;
	}
	check_position(maxsqlen, dp, line, column);
}
