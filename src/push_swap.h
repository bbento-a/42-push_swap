/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbento-a <bbento-a@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 12:36:47 by bbento-a          #+#    #+#             */
/*   Updated: 2024/03/29 15:18:33 by bbento-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>

typedef struct s_stack_node
{
	int						value;
	struct s_stack_node		*next_node;
	struct s_stack_node		*prev_node;
}	t_node;


// Main Function
//	main_ps.c

// Stack Funtions
//	stack_start.c
void	append_node(t_node **stack, int nbr);
void	initialize_stack(t_node **a, char **argv);

// Moves operations
//	moves_push.c
//	moves_rotate.c
//	moves_swap.c



#endif
