/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjana <sjana@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 12:02:40 by sjana             #+#    #+#             */
/*   Updated: 2024/02/29 08:46:55 by sjana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] >= '\0')
	{
		if (dest[i] == '\0')
		{
			while (src[j] != '\0' && j < nb)
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
	unsigned int	nb;

	nb = 3;

	printf("%s", ft_strncat(dest, src, nb));
	return (0);
}*/
