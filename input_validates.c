/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_validates.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 00:14:20 by marcos            #+#    #+#             */
/*   Updated: 2025/12/02 20:49:57 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	is_valid_number(int argc, char **argv)
{
	int		index_argv;
	char	**content_argv_index;
	int		count_numbers;

	index_argv = 1;
	count_numbers = 0;
	if (argc < 2)
		return (0);
	while (argv[index_argv])
	{
		content_argv_index = ft_split(argv[index_argv], ' ');
		if (argv_index_is_number(content_argv_index, &count_numbers)
			&& argv_index_is_int(content_argv_index))
		{
			ft_free_split(content_argv_index);
			index_argv++;
		}
		else 
		{
			ft_free_split(content_argv_index);
			return (print_error());
		}
	}
	return (count_numbers);
}

int input_validate_dups(char **argv, int *numbers, int total_numbers)
{
	if (fill_vect_numbers(argv, numbers))
		{
			if (!has_dup(numbers, total_numbers))
				return (1);
		}
	return(0);	
}

int *input_is_valid(int argc, char **argv)
{
	int	total_numbers;
	int *numbers;

	total_numbers = is_valid_number(argc, argv);
	if (!total_numbers)
		return (NULL);
	numbers = malloc(sizeof(int) * total_numbers);
	if (!numbers)
		return (NULL);
	if (input_validate_dups(argv, numbers,total_numbers))
		return (numbers);
	free (numbers);
	return (NULL);
}

// int input_is_valid; implements needed