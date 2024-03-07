/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjana <sjana@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 08:30:54 by sjana             #+#    #+#             */
/*   Updated: 2024/02/28 14:24:49 by sjana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	str[] = "hello";
	
	ft_strlen(str);
	printf("%i", ft_strlen(str));
	return (0);
}*/
