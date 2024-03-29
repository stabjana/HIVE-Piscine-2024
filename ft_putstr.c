/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjana <sjana@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 09:00:54 by sjana             #+#    #+#             */
/*   Updated: 2024/02/28 15:05:51 by sjana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	{
		write(1, str, i);
	}
}
/*
#include <stdio.h>
int	main(void)
{
	char	*str;
	str = "hello";

	ft_putstr(str);
	return (0);
}*/
