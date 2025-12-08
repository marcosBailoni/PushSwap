/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 22:35:11 by marcos            #+#    #+#             */
/*   Updated: 2025/12/02 20:57:20 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
#include <stdio.h>
#include <stdlib.h>

int *input_is_valid(int argc, char **argv);

int main(int argc, char **argv)
{
    int *numbers;
    int total_numbers;
    int i;

    numbers = input_is_valid(argc, argv);


    // Você PRECISA saber quantos números existem.
    // Sua função de validação retorna isso dentro de is_valid_number(),
    // mas input_is_valid() não expõe esse valor.
    //
    // ENTÃO → recomendo que sua função is_valid_number() seja pública,
    // ou você FAZ assim (simples e funciona):

    total_numbers = 0;
    for (int i = 1; argv[i]; i++)
    {
        char **split = ft_split(argv[i], ' ');
        for (int j = 0; split[j]; j++)
            total_numbers++;
        ft_free_split(split);
    }

    // Agora imprime o array
    for (i = 0; i < total_numbers; i++)
        printf("numbers[%d] = %d\n", i, numbers[i]);

    free(numbers);
    return (0);
}


// ate o momento, usa as funcoes acimae valida a entrada
// primeiro se tem pelo menos um argumento pra testar
// depois valida se e numero e inteiro
//agora vai validar se tem duplicata
// implementar parte que valida se esta ordenado e se tem mais de um numero


// int	main(int argc, char **argv)
// {
// 	if (!input_validate)
// 		return (print_error);
// 	else 
// 	{
		
// 	}

// 	return (0);
// }




// int	main(int argc, char **argv)
// {
// 	int		count_numbers;
// 	int		index_argv;
// 	char	**split_argv;
// 	int		i;
// 	// int		j;

// 	count_numbers = is_valid_number(argc, argv);
// 	if (!count_numbers)
// 	{
// 		print_error();
// 		return (1);
// 	}

// 	printf("Total numbers: %d\n", count_numbers);

// 	index_argv = 1;
// 	while (argv[index_argv])
// 	{
// 		split_argv = ft_split(argv[index_argv], ' ');
// 		i = 0;
// 		while (split_argv[i])
// 		{
// 			printf("%s\n", split_argv[i]);
// 			i++;
// 		}
// 		ft_free_split(split_argv);
// 		index_argv++;
// 	}

// 	return (0);
// }