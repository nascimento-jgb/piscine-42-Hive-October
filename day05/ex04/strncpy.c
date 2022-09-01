/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 19:32:12 by jonascim          #+#    #+#             */
/*   Updated: 2022/08/17 10:47:48 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*start = dest;
	int		i;

	i = 0;
	if (*src == 0 || *dest == 0)
		return (0);
	while (dest[i] != '\0')
		i++;
	if (i < n)
		return (0);
	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
		*dest = '\0';
	return (start);
}

int	main(void)
{
	char str1[] = "home is big";
	char str2[] = "home is big and great";
	printf("%s", ft_strncpy(str1, str2, 5));
	printf("%c",'\n');
	printf("%c",'\n');
	printf("%s", strncpy(str1, str2, 5));
	return(0);
}
