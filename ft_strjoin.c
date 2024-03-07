/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjana <sjana@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 15:42:44 by sjana             #+#    #+#             */
/*   Updated: 2024/03/06 09:34:16 by sjana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

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

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int	str_count(int size, char **strs, char *sep)
{
	int	i;
	int	size_all;

	i = 0;
	size_all = 0;
	while (i < size)
	{
		size_all = size_all + ft_strlen(strs[i]);
		i++;
	}
	size_all = size_all + (size - 1) * ft_strlen(sep);
	return (size_all);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	char	*string;

	i = 1;
	j = 0;
	string = (char *) malloc (str_count(size, strs, sep) * sizeof (char) + 1);
	while (i < size)
	{
		ft_strcat(string, strs[i]);
		j = j + ft_strlen(strs[i]);
		i++;
		if (i != size)
		{
			ft_strcat(string, sep);
			j = j + ft_strlen(sep);
		}
	}
	string[j] = '\0';
	return (string);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	*sep = "--©©--";
	char	*str;

	str = ft_strjoin(argc, argv, sep);
	printf("%s\n", str);
	free(str);
	return (0);
}*/
