/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjana <sjana@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 16:16:07 by sjana             #+#    #+#             */
/*   Updated: 2024/03/06 08:35:13 by sjana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;
	int	j;

	i = min;
	j = 0;
	if (min >= max)
		return (NULL);
	array = (int *) malloc (sizeof(int) * (max - min));
	while (i < max)
	{
		array[j] = i;
		i++;
		j++;
	}
	return (array);
}
/*
#include <stdio.h>
#include <unistd.h>

int	main()
{
	int	min = 15;
	int	max	= 20;
	int	*pointer = ft_range(min, max);
	int	i = 0;

	while (i < max - min)
	{
		//write(1, pointer[i], 1);
		printf("%i\n", pointer[i]);
		//write(1, "\n", 1);
		i++;
	}
	return (0);
}*/
