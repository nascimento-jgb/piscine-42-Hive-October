/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zero_one.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 18:59:04 by druina            #+#    #+#             */
/*   Updated: 2022/08/31 11:55:24 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <stdlib.h>

int **zero_one(char **str, int y, int x)
{
    int i;
    int j;
    int **result;
    i = 0;
    j = 0;
    result = (int **)malloc(sizeof(int *) * y);
    while (j < y)
    {
     result[j] = (int*)malloc(sizeof(int) * x);
     j++;
    }
    j = 0;
    while(i < y)
    {
        while(j < x)
        {
            if(str[i][j] == 'o')
                result[i][j] = 0;
            else
                result[i][j] = 1;
            j++;
        }
        j = 0;
        i++;
    }
        return(result);
}
