/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers_functions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 00:08:18 by marcos            #+#    #+#             */
/*   Updated: 2025/11/30 00:23:24 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	argv_index_is_number(char **list, int *count)
{
	int	i;
	int	j;
	char	c;

	i = 0;
	while (list[i])
	{
		j = 0;
		while (list[i][j])
		{
			c = list[i][j];
			if (c == '+' || c == '-')
			{
				if (j != 0 || !ft_isdigit(list[i][j + 1]))
					return (0);
			}
			else if (!ft_isdigit(c))
				return (0);
			j++;
		}
		i++;
	}
	*count += i;
	return (i);
}

int	argv_index_is_int(char **list)
{
	int	i;
	int	dummy;
	long long	number;

	i = 0;
	number = 0;
	dummy = 0;
	if (!argv_index_is_number(list, &dummy))
		return (0);
	while (list[i])
	{
		number = ft_atoll(list[i]);
		if (number < -2147483648 || number > 2147483647)
			return (0);
		i++;
	}
	return (1);
}

int	fill_vect_numbers(char **argv, int total_numbers, int *numbers)
{
	int i;
	int j;
	int x;
	char **content_argv;

	i = 1;
	x = 0;
	while (argv[i])
	{
		j = 0;
		content_argv = ft_split(argv[i], ' ');
		if (!content_argv)
			return (0);
		while (content_argv[j])
		{
			numbers[x] = ft_atoi(content_argv[j]);
			j++;
			x++;
		}
		ft_free_split(content_argv);
		i++;
	}
	return (1);
}

//valida se tem algum numero duplicado
int	is_dup(int *vect, int total_numbers)
{
	int i;
	int	j;
	
	i = 0;
	while (i < total_numbers - 1)
	{
		j = i + 1;
		while (j < total_numbers)
		{
			if (vect[i] == vect[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}