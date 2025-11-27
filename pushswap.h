/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 19:51:36 by marcos            #+#    #+#             */
/*   Updated: 2025/11/26 19:53:56 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>

typedef struct node_number
{
	int					value;
	struct node_number	*next;
}					n_number;

#endif