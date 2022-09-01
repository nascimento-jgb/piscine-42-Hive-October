/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line_count.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 12:21:19 by druina            #+#    #+#             */
/*   Updated: 2022/08/31 22:15:53 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	line_count(char *str)
{
	int	i;
	int	line;
	int	begin;

	i = 0;
	line = 0;
	begin = begin_map(str);
	while (str[i + begin] != '\0')
	{
		if (str[i + begin] == '\n')
		{
			line++;
		}
		i++;
	}
	return (line);
}
