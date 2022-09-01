/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 15:58:30 by jonascim          #+#    #+#             */
/*   Updated: 2022/08/22 17:12:41 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int lenght, int (*f)(int, int))
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	while (i < lenght)
	{
		if ((*f)(tab[i], tab[i + 1] == -1))
			flag = -1;
		else if ((*f)(tab[i], tab[i + 1] == 0))
			flag = 0;
		else
			flag = 1;
		i++;
	}
	if (flag < 0)
		return (1);
	else
		return (0);
}
