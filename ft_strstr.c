/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjana <sjana@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 14:06:54 by sjana             #+#    #+#             */
/*   Updated: 2024/02/29 09:25:56 by sjana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)

{
	int	i;
	int	j;

	i = 0;
	if (to_find[j] != '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
		{
			j++;
		}
		if (to_find[j] == '\0')
		{
			return (&str[i]);
		}
		i++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>

int main()

{
	char	str[] = "123 43 43 6";
	char	to_find[] = "346";

	printf("%s\n", ft_strstr(str, to_find));
	printf("%s\n", strstr(str, to_find));
	return (0);
	}*/
