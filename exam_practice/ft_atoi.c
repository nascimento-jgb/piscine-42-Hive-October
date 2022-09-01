/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 11:50:23 by jonascim          #+#    #+#             */
/*   Updated: 2022/08/26 13:17:56 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int res;

	i = 0;
	res = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <=13) || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	if (str[i] == '+')
		i++;
	while (str[i] >= 48 && str[i] <= 57)
		{
			res = res * 10 + str[i] - '0';
			i++;
		}
	return (res * sign);
}
