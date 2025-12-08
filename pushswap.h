/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 19:51:36 by marcos            #+#    #+#             */
/*   Updated: 2025/12/02 20:49:37 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

#include "libft/libft.h"
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>


typedef struct node_number
{
	int					value;
	struct node_number	*next;
}					n_number;

//fail
int	print_error();
void	ft_free_split(char **vect);

//numbers
int	argv_index_is_number(char **list, int *count);
int	argv_index_is_int(char **list);
int	fill_vect_numbers(char **argv, int *numbers);
int	has_dup(int *vect, int total_numbers);

//validates_ipunt
int	is_valid_number(int argc, char **argv);
int input_validate_dups(char **argv, int *numbers, int total_numbers);
int *input_is_valid(int argc, char **argv);

#endif