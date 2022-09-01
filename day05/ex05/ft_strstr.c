/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 19:26:24 by jonascim          #+#    #+#             */
/*   Updated: 2022/08/19 09:41:23 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int j;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}

int	main(void)
{
	char str1[] = "my home it very nice and is cozy";
	char str2[] = "is";
	printf("%s", ft_strstr(str1, str2));
	printf("%c",'\n');
	printf("%c",'\n');
	printf("%s", strstr(str1, str2));
	return(0);
}
