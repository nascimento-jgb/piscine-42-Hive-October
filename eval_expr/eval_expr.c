/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 12:19:54 by jonascim          #+#    #+#             */
/*   Updated: 2022/08/28 15:50:37 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int str_lenght(char *str)
{
	int i;

	i = 0;
	while (*str)
		i++;
	return (i);
}

int	evalp_expr(char *str)
{
	char *aux;
	int lenght;

	lenght = str_lenght(str);
	aux = malloc(sizeof(char*))
}
