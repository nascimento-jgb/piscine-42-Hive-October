/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 19:32:12 by jonascim          #+#    #+#             */
/*   Updated: 2022/08/16 22:07:13 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*start;
	int		i;

	i = 0;
	start = dest;
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
