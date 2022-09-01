/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate_arr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 11:36:49 by druina            #+#    #+#             */
/*   Updated: 2022/08/30 15:49:31 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char **generate_arr(char *str, int y, int x, int beginmap)
{
    int i;
    int j;
    int k;
    char **result;
    i = 0;
    j = 0;
    k = 0;
    result = (char **)malloc(sizeof(char *) * y);
    while (j < y)
    {
        result[j] = (char *)malloc(sizeof(char) * x);
        j++;
    }
    j = 0;
    while (i < y)
    {
        while (str[j + beginmap + 1] != '\n')
        {
            result[i][k] = str[j + beginmap + 1];
            j++;
            k++;
        }
        k = 0;
        j++;
        i++;
    }

    return (result);
}
