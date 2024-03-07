/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjana <sjana@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 09:27:59 by sjana             #+#    #+#             */
/*   Updated: 2024/02/25 13:56:27 by sjana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)

{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest [i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)

{
	char	dest[6];
	char	src[6]  = "Brlel";

	ft_strcpy(dest, src);
	printf("%s", dest);
	return (0);
}
