/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjana <sjana@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 08:16:45 by sjana             #+#    #+#             */
/*   Updated: 2024/02/29 09:20:26 by sjana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)

{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i] == s2[j] && s1[i])
	{
		s1++;
		s2++;
	}
	return (s1[i] - s2[j]);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	int	x;
	int	y;
	char	*s1 = "dkjfkjdjhf;";
	char	*s2 = "bkjl";

	x = ft_strcmp(s1, s2);
	y = strcmp(s1, s2);
	printf("%d\n", x);
	printf("%d\n", y);
	return (0);
}
*/
