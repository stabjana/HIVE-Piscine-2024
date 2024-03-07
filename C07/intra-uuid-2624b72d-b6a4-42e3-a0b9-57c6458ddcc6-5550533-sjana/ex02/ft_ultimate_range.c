/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjana <sjana@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 16:16:29 by sjana             #+#    #+#             */
/*   Updated: 2024/03/06 08:50:21 by sjana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*array;
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	array = (int *) malloc (sizeof(int) * (max - min));
	if (! array)
		return (-1);
	while (i < max - min)
	{
		array[i] = min + i;
		i++;
	}
	*range = array;
	return (i);
}
/*
#include <stdio.h>

int	main()
{
	int	min = 10;
	int	max	= 20;
	int	i = 0;
	int	*pointer;
	
	ft_ultimate_range(&pointer, min, max);
	while (i < max - min)
	{
		printf("%i\n", pointer[i]);
		i++;
	}
	w
		printf("%i\n", i);
	return (0);
}*/
