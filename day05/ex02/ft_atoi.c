/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 10:18:45 by jonascim          #+#    #+#             */
/*   Updated: 2022/08/19 09:42:48 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_atoi_remove(char *str)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i] == ' ' || str[i] == '+')
	i++;
	while (str[i] != '\0')
	{
		str[j] = str[i];
		i++;
		j++;
	}
	return (str);
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

int	main(void)
{
	char str[] = "\n \r |";
	char str2[] = "\n \r |";
	int val;
	int val2;

	val2 = atoi(str);
	printf("%d", val2);
	printf("%c", '\n');
	printf("%c", '\n');
	val = ft_atoi(str2);
	printf("%d", val);
	return (0);
}
