/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjana <sjana@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 10:07:55 by sjana             #+#    #+#             */
/*   Updated: 2024/02/29 08:46:21 by sjana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] >= '\0')
	{
		if (dest[i] == '\0')
		{
			while (src[j] != '\0')
			{
				dest[i] = src[j];
				i++;
				j++;
			}
			dest[i] = '\0';
		}
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char	dest[20] = "halloli";
	char	src[5] = "hello";

	printf("%s", ft_strcat(dest, src));
	return (0);
}*/
