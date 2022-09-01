/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   begin_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 12:10:27 by druina            #+#    #+#             */
/*   Updated: 2022/08/31 11:55:21 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int begin_map(char *str)
{
    int i;
    int beginmap;

    i = 0;
    beginmap = 0;
    while(str[i] != '\0')
    {
        if (str[i] == '\n')
        {
             beginmap = i;
             break;
        }
        i++;
    }
    return(beginmap);
}
