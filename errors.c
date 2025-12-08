/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 00:08:43 by marcos            #+#    #+#             */
/*   Updated: 2025/12/02 20:56:36 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h" 

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