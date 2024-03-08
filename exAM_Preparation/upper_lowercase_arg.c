/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   upper_lowercase_arg.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjana <sjana@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 08:36:09 by sjana             #+#    #+#             */
/*   Updated: 2024/03/07 15:22:48 by sjana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
			{
				if (argv[i][j] >= 65 && argv[i][j] <= 90)
					argv[i][j] = argv[i][j] + 32;
				else if (argv[i][j] >= 97 && argv[i][j] <= 122)
					argv[i][j] = argv[i][j] - 32;
				write (1, &argv[i][j], 1);
				j++;
			}
		argv[i][j] = '\0';
		write (1, " ", 1);
		i++;
	}
	write (1, "\n", 1);
	return (0);
}
