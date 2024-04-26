/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbento-a <bbento-a@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 11:16:24 by bbento-a          #+#    #+#             */
/*   Updated: 2024/04/23 22:38:08 by bbento-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void main_sort(t_node **a, t_node **b)
{
	// printf("%s:%d\n", __func__, __LINE__);
	t_node *smallest_node;
	int a_len;

	a_len = ft_stacklen(*a);
	// write(1, "test\n", 5);

	fprintf(stderr, "Lengh: %d\n", a_len);
	while (a_len > 3)
	{
		pb(a, b);
		a_len--;
	}
	three_sort(a);
	while (*b) // Here's where we're going to sort the whole stack
	{
		set_sortvals(*a, *b); // setting all values and positions to the nodes;
		move_nodes(a, b);	  // here is where we actually move the nodes, according to their sort values
							  // we repeat this process until we have no nodes in stack b
	}
	// set_nodeindex(*a);
	// smallest_node = find_smallest(*a);
	// if (smallest_node->above_median)
	// 	while (*a != smallest_node)
	// 	{
	// 		ra(a);
	// 	}
	// else
	// 	while (*a != smallest_node)
	// 	{
	// 		rra(a);
	// 	}





}

void move_nodes(t_node **a, t_node **b)
{
	t_node *cheapest;

	cheapest = return_cheapest(*b);
	if (cheapest->above_median && cheapest->target_node->above_median)
	{
		// write(1, "Rotate Ab\n", 15);
		rotate_ab(a, b, cheapest);
	}
	else if (!(cheapest->above_median) && !(cheapest->target_node->above_median))
	{
		// write(1, "REV Rotate Ab\n", 15);
		rev_rotate_ab(a, b, cheapest);
	}
	finish_rotate(a, cheapest->target_node, 'a');
	finish_rotate(b, cheapest, 'b');
	pa(b, a);
}

// We're going to rotate both stacks until target/cheapest is on top
void rotate_ab(t_node **a, t_node **b, t_node *cheapest)
{
	while (*a != cheapest->target_node && *b != cheapest)
		rr(a, b);
	set_nodeindex(*a);
	set_nodeindex(*b);
}

// Same as before but reverse rotate
void rev_rotate_ab(t_node **a, t_node **b, t_node *cheapest)
{
	while (*a != cheapest->target_node && *b != cheapest)
		rrr(a, b);
	set_nodeindex(*a);
	set_nodeindex(*b);
}

void finish_rotate(t_node **stack, t_node *top_node, char name)
{
	while (*stack != top_node)
	{
		if (name == 'a')
		{
			if (top_node->above_median)
				ra(stack);
			else
				rra(stack);
		}
		else if (name == 'b')
		{
			if (top_node->above_median)
			{
				// write(1, "Finish Rotate\n", 10);
				rb(stack);
			}
			else
			{
				// write(1, "Finish Rotate\n", 10);
				rrb(stack);
			}
		}
	}
}
