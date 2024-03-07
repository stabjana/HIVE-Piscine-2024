/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjana <sjana@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 08:16:45 by sjana             #+#    #+#             */
/*   Updated: 2024/03/02 09:43:18 by sjana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				result;
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i] || s1[i] == '\0' || s2[i] == '\0')
		{
			result = s1[i] - s2[i];
			return (result);
		}
		i++;
	}
	result = 0;
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)

{
	unsigned int	n = 2;
    char str[20] = "";
    char str2[20] = "A";

	printf("%d\n", ft_strncmp ("", "AC", n));
	printf("%d\n", strncmp ("", "AC", n));	
	printf("%d\n", ft_strncmp ("AB", "A", n));
	printf("%d\n", strncmp ("AB", "A", n));
    printf("own=%d\n", ft_strncmp (str, str2, n));
    printf("system=%d\n", strncmp (str, str2, n));
	return (0);
}*/
