/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 15:19:59 by jonascim          #+#    #+#             */
/*   Updated: 2022/08/22 15:27:43 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int lenght, int (*f)(int))
{
	int	i;
	int	*map;

	i = 0;
	map = (int *)malloc(lenght * sizeof(int));
	while (i < lenght)
	{
		map[i] = (*f)(tab[i]);
		i++;
	}
	return (map);
}
