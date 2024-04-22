/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_values.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbento-a <bbento-a@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 17:45:24 by bbento-a          #+#    #+#             */
/*   Updated: 2024/04/22 12:16:49 by bbento-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_sortvals(t_node	*a, t_node *b)
{
	set_nodeindex(a);
	set_nodeindex(b);
	set_targetnode(a, b);
	set_price(a, b);
	set_cheapest(b);
}

// Defines the current position of each node in the stack
void	set_nodeindex(t_node *stack)
{
	int	i;
	int	middle;

	middle = ft_stacklen(stack);
	while (stack)
	{
		stack->index = i;
		if (stack->index <= middle)
			stack->above_median = true;
		else
			stack->above_median = false;
		stack = stack->next;
		i++;
	}
}

// Sets each target node from stack a on each node of stack b
void	set_targetnode(t_node *a, t_node *b)
{
	t_node	*target_node;
	t_node	*current_a;
	long	best_index;

	while (b)
	{
		best_index = LONG_MAX; // placeholder
		current_a = a;
		while (current_a)
		{
			if (current_a->value > b->value
					&& current_a->value < best_index)
			{
				best_index = current_a->value;
				target_node = current_a;
			}
			current_a = current_a->next;
		}
		if (best_index == LONG_MAX)
			b->target_note = find_smallest(a);
		else
			b->target_note = target_node;
		b = b->next;
	}
}

// Defines the push price of each node according to their position in the stack
void	set_price(t_node *a, t_node *b)
{

}

// Flags the best case to execute (best node to push)
void	set_cheapest(t_node *b)
{

}
