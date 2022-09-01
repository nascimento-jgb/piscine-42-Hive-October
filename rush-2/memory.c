/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 16:10:51 by jonascim          #+#    #+#             */
/*   Updated: 2022/08/28 16:16:56 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rushes.h"

void	*ft_memcpy(void *dst, const void *src, unsigned int size)
{
	unsigned int	i;
	char			*s;
	char			*d;

	s = (char *)src;
	d = (char *)dst;
	i = 0;
	while (i < size)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

char	*ft_realloc(char *ptr, unsigned int size)
{
	char	*new;

	new = (char *)malloc(size);
	ft_memcpy(new, ptr, size / 2);
	free(ptr);
	return (new);
}
