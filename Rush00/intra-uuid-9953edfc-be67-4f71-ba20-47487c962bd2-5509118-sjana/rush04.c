/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjana <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 09:18:13 by sjana             #+#    #+#             */
/*   Updated: 2024/02/20 13:20:41 by sjana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char r);

void	function(int i, int l, int x, int y)
{
	if ((i == 0 && l == 0) || (i == (x - 1) && l == (y - 1) && l > 0 && i > 0))
		ft_putchar('A');
	else if ((l == (y - 1) && i < 1) || (i == (x - 1) && l < 1))
		ft_putchar('C');
	else if ((i == 0 || i == (x -1)) || (l == 0 || l == (y - 1)))
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	i;
	int	l;

	l = 0;

	while (l < y)
	{
		i = 0;
		while (i < x)
		{
			function(i, l, x, y);
			i++;
		}
		l++;
		ft_putchar('\n');
	}
}
