/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 21:45:29 by jonascim          #+#    #+#             */
/*   Updated: 2022/08/19 10:35:20 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	ft_rot42(char *str)
{
	int		i;
	char	*aux;
	int		res;

	i = 0;
	res = 0;
	aux = str;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			res = 'A' + (str[i] - 'A' + 42) % 26;
			aux[i] = res;
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			res = 'a' + (str[i] - 'a' + 42) % 26;
			aux[i] = res;
		}
		i++;
	}
	return (*aux);
}
