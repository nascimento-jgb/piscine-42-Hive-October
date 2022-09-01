/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 10:18:45 by jonascim          #+#    #+#             */
/*   Updated: 2022/08/23 10:29:54 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_atoi_remove(char *str)
{
	int		i;
	int		j;
	char	*aux;

	i = 0;
	j = 0;
	aux = str;
	while (str[i] == ' ' || str[i] == '+')
		i++;
	while ((str[i] >= 48 && str[i] <= 57) || str[i] == 45)
	{
		aux[j] = str[i];
		i++;
		j++;
	}
	return (aux);
}

int	ft_atoi(char *str)
{
	int		sign;
	int		aux;
	int		res;
	char	*temp;

	sign = 1;
	aux = 0;
	res = 0;
	temp = ft_atoi_remove(str);
	if (temp[aux] == '-')
	{
		sign = -1;
		temp++;
	}
	while (temp[aux] >= 48 && temp[aux] <= 57)
	{
		res = res * 10 + temp[aux] - '0';
		aux++;
	}
	return (sign * res);
}
