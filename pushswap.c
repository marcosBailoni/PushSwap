/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 22:35:11 by marcos            #+#    #+#             */
/*   Updated: 2025/11/26 23:26:05 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
#include "libft.h"

int	print_error()
{
	ft_putstr("Error\n");
	return (0);
}

void	ft_free_split(char **vect)
{
	int	count;

	count = 0;
	while(vect[count])
	{
		free(vect[count]);
		count++;
	}
	free (vect);
}

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



int	input_validate(int argc, char **argv){
	int		index_argv;
	char	*content_argv_index;
	int		count_numbers;

	index_argv = 1;
	count_numbers = 0;
	if (argc < 2)
		return (print_error);
	while (argv[index_argv])
	{
		content_argv_index = ft_split(argv[index_argv], ' ');
		if (argv_index_is_number(content_argv_index, &count_numbers) && argv_index_is_int(content_argv_index))
		{
			ft_free_split(content_argv_index);
			index_argv++;
		}				
		else 
		{
			ft_free_split(content_argv_index);
			return (0)
		}
	}
	return (count_numbers);	
}



void	ft_push_swap(int argc, char **argv)
{
	if (validar numeros retornar 0)
		return (0);
}