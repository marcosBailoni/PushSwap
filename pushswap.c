/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 22:35:11 by marcos            #+#    #+#             */
/*   Updated: 2025/11/30 00:06:02 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
#include <stdio.h>

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

// valida se e numbero
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

//valida se é numero inteiro
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
// cria vetor de int
int	*create_vect_numbers(char **argv, int total_numbers)
{
	int i;
	int j;
	int x;
	int *numbers;
	char **content_argv;

	i = 1;
	x = 0;
	numbers = malloc(sizeof(int) * total_numbers);
	if (!numbers)
		return (NULL);
	while (argv[i])
	{
		j = 0;
		content_argv = ft_split(argv[i], ' ');
		if (!content_argv)
		{
			free(numbers);
			return (NULL);
		}
		while (content_argv[j])
		{
			numbers[x] = ft_atoi(content_argv[j]);
			j++;
			x++;
		}
		ft_free_split(content_argv);
		i++;
	}
	return (numbers);
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

// ate o momento, usa as funcoes acimae valida a entrada
// primeiro se tem pelo menos um argumento pra testar
// depois valida se e numero e inteiro
//agora vai validar se tem duplicata
// implementar parte que valida se esta ordenado e se tem mais de um numero

int	is_valid_number(int argc, char **argv){
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
			return (0);
		}
	}
	return (count_numbers);
}

int input_validate_dups(int count_numbers);
{
	int *numbers;

	numbers = malloc(sizeof(int) * total_numbers);
	if (!numbers)
		return (NULL);
}



// int	main(int argc, char **argv)
// {
// 	if (!input_validate)
// 		return (print_error);
// 	else 
// 	{
		
// 	}

// 	return (0);
// }

int	main(int argc, char **argv)
{
	int		count_numbers;
	int		index_argv;
	char	**split_argv;
	int		i;
	// int		j;

	count_numbers = is_valid_number(argc, argv);
	if (!count_numbers)
	{
		print_error();
		return (1);
	}

	printf("Total numbers: %d\n", count_numbers);

	index_argv = 1;
	while (argv[index_argv])
	{
		split_argv = ft_split(argv[index_argv], ' ');
		i = 0;
		while (split_argv[i])
		{
			printf("%s\n", split_argv[i]);
			i++;
		}
		ft_free_split(split_argv);
		index_argv++;
	}

	return (0);
}