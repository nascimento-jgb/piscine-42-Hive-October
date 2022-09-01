/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 11:45:22 by jonascim          #+#    #+#             */
/*   Updated: 2022/08/16 16:41:20 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*start = dest;

	if (*src == NULL || *dest == NULL)
		return NULL;
	while (*src != 0)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}

int main(void)
{
	char str1[] = "home is a big";
	char str2[] = "my name is";
	printf("%s", ft_strcpy(str1, str2));
	printf("%c",'\n');
	printf("%c",'\n');
	printf("%d", sizeof(str1));
	printf("%c",'\n');
	printf("%c",'\n');
	printf("%d", sizeof(str2));
	printf("%c",'\n');
	printf("%c",'\n');
	printf("%s", strcpy(str1, str2));
	return(0);
}
