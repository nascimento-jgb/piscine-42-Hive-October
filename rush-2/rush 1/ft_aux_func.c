/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aux_func.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 10:18:45 by jonascim          #+#    #+#             */
/*   Updated: 2022/08/28 10:08:00 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

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

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] != '\0' && str2[i] != '\0' && str1[i] == str2[i])
		i++;
	return (str1[i] - str2[i]);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
