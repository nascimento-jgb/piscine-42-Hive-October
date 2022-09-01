/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 12:27:15 by jonascim          #+#    #+#             */
/*   Updated: 2022/08/26 12:40:42 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_range(int start, int end)
{
	int	lenght;
	int	*aux;
	int	i;

	if (start == end)
		return ((int*)0);
	if (start < end && start < 0)
		lenght = (start * -1) + end + 1;
	else if (start < end)
		lenght = end - start + 1;
	else if (start > end)
		lenght = start - end + 1;
	aux = (int*)malloc(sizeof(*aux) * lenght + 1);
	i = 0;
	while (lenght > 0)
	{
		aux[i] =  start + i;
		i++;
		lenght--;
	}
	return ((int *)aux);
}
