/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 22:58:33 by jonascim          #+#    #+#             */
/*   Updated: 2022/08/12 23:25:10 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_strrev(char *str)
{
	int	aux;
	int	count;

	aux = 0;
	count = 0;
	while (str[aux] != '\0')
	{
		aux++;
	}
	while (aux >= 0)
	{
		str[count] = str[aux];
		aux--;
		count++;
	}
	return (*str);
}
