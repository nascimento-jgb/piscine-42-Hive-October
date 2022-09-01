/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 10:27:28 by jonascim          #+#    #+#             */
/*   Updated: 2022/08/18 16:23:45 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*aux;
	int	i;
	int	diff;

	if (min == max || min > max)
		return ((int *)0);
	else if (min < -2147483648 || max > 2147483647)
		return ((int *)0);
	else if (max >= 0 && min < 0)
		diff = max + (min * -1);
	else if (max < 0 && min >= 0)
		diff = (max * -1) + min;
	else if (max < 0 && min < 0)
		diff = (max * -1) + (min * -1);
	aux = (int *)malloc(sizeof(*aux) * ((max - min) + 1));
	i = 0;
	while (i++ < diff)
		aux[i] = min + i;
	return ((int *)aux);
}
