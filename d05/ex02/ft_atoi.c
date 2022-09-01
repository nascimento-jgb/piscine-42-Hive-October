/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 10:18:45 by jonascim          #+#    #+#             */
/*   Updated: 2022/08/17 12:26:33 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	while (temp[aux] >= 48 && temp[aux]< 58)
	{
		res = res * 10 + temp[aux] - '0';
		aux++;
	}
	return (sign * res);
}
