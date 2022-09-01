/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 19:11:38 by jonascim          #+#    #+#             */
/*   Updated: 2022/08/17 23:11:39 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_params(int argc, char **argv)
{
	int	index;
	int	aux;

	index = 1;
	while (index < argc)
	{
		aux = 0;
		while (argv[index][aux] != '\0')
		{
			ft_putchar(argv[index][aux]);
			aux++;
		}
		ft_putchar('\n');
		index++;
	}
}

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if ((s1[i] == '\0' && s2[i] != '\0') || (s1[i] != '\0' && s2[i] == '\0'))
		return (s1[i] - s2[i]);
	return (0);
}

int	main(int argc, char **argv)
{
	int	j;

	j = 1;
	while (j < argc - 1)
	{
		if (ft_strcmp(argv[j + 1], argv[j]) < 0)
		{
			ft_swap(&argv[j], &argv[j + 1]);
			j = 1;
		}
		else
			j++;
	}
	ft_print_params(argc, argv);
	return (0);
}
