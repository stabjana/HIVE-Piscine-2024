/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjana <sjana@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 08:36:47 by sjana             #+#    #+#             */
/*   Updated: 2024/03/02 13:38:06 by sjana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (i * i < nb && i < 46341)
	{
		i++;
	}
	if (i * i != nb)
		return (0);
	else
		return (i);
}

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	printf(" %d\n", ft_sqrt(25));
	printf(" %d\n", ft_sqrt(100));	
	printf(" %d\n", ft_sqrt(10000));
	printf(" %d\n", ft_sqrt(20000000));
	printf(" %d\n", ft_sqrt(214748364));
	printf(" %d\n", ft_sqrt(2147483647));
	return (0);
}
