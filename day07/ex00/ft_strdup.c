/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 09:52:45 by jonascim          #+#    #+#             */
/*   Updated: 2022/08/18 16:20:58 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*aux;
	char	*temp;
	int		i;
	int		counter;

	while (*src)
		i++;
	aux = (char *)malloc(sizeof(*aux) * i + 1);
	counter = 0;
	while (src[counter] != '\0')
	{
		aux[counter] = src[counter];
		counter++;
	}
	return ((char *)aux);
}
