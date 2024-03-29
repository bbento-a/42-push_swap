/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_start.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbento-a <bbento-a@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 14:24:16 by bbento-a          #+#    #+#             */
/*   Updated: 2024/03/29 15:19:51 by bbento-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// This function is going to append a new node with n value to the stack.It
// will "attach" the new node if there are already nodes to the end of the list
void	append_node(t_node **stack, int n)
{
	t_node	*new_node;
	t_node	*last_node;

	if (!(stack))
		return (NULL);
	new_node = malloc(sizeof(t_node));
	if (!(new_node))
		return (NULL);
	new_node->next_node = NULL;
	new_node->value = n;
	if ()
}

// This function will iterate all arguments and append the value to a new node
void	initialize_stack(t_node **a, char **argv)
{
	long	n;
	int		i;

	while(argv[i])
	{
		append_node(a, (int)n);
		i++;
	}
}
