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

void print_list(t_node **a, char *str)
{
	if (!*a)
	{
		ft_printf("Lista: %s is empty\n", str);
		return;
	}
	ft_printf("Lista: %s\n", str);
	while ((*a)->next != NULL)
	{
		ft_printf("[%d]-", (*a)->index);
		ft_printf("%d\n", (*a)->value);
		(*a) = (*a)->next;
	}
	ft_printf("\n");
}

void main_sort(t_node **a, t_node **b)
{
	t_node *smallest_node;
	int a_len;

	a_len = ft_stacklen(*a);
	ft_printf("First Len: %d\n", a_len);
	while (a_len > 3)
	{
		pb(a, b);
		a_len--;
	}
	three_sort(a);
	ft_printf("=======================================\n");
	ft_printf("Len: %d\n", a_len);
	print_list(a, "A");
	print_list(b, "B");
	ft_printf("=======================================\n");
	while (*b) // Here's where we're going to sort the whole stack
	{
		set_sortvals(*a, *b); // setting all values and positions to the nodes;
		move_nodes(a, b);	  // here is where we actually move the nodes, according to their sort values
							  // we repeat this process until we have no nodes in stack b
	}
	set_nodeindex(*a);
	smallest_node = find_smallest(*a);
	if (smallest_node->above_median)
		while (*a != smallest_node)
			ra(a);
	else
		while (*a != smallest_node)
			rra(a);
}

/* void move_nodes(t_node **a, t_node **b)
{
	t_node *cheapest;

	cheapest = return_cheapest(*b);
	if (cheapest->above_median && cheapest->target_node->above_median)
		rotate_ab(a, b, cheapest);
	else if (!(cheapest->above_median) && !(cheapest->target_node->above_median))
		rev_rotate_ab(a, b, cheapest);
	// printf("cheapest node (b): %i\n", cheapest->value);
	// printf("cheapest node (a): %i\n", cheapest->target_node->value);
	// printf("stack len b: %d\n", ft_stacklen(*b));
	// printf("stack len a: %d\n", ft_stacklen(*a));
	printf("cheapest node position(b): %i\n", cheapest->index);
	printf("cheapest node position(a): %i\n", cheapest->target_node->index);	
	finish_rotate(b, cheapest, 'b');
	finish_rotate(a, cheapest->target_node, 'a');
	pa(b, a);
} */


void move_nodes(t_node **a, t_node **b)
{
	t_node *cheapest;

	cheapest = return_cheapest(*b);
	if (cheapest->above_median && cheapest->target_node->above_median)
		rotate_ab(a, b, cheapest);
	else if (!(cheapest->above_median) && !(cheapest->target_node->above_median))
		rev_rotate_ab(a, b, cheapest);
	ft_printf("-----------------------------------\n");
	print_list(a, "A");
	print_list(b, "B");
	finish_rotate(b, cheapest, 'b');
	finish_rotate(a, cheapest->target_node, 'a');
	ft_printf("-----------------------------------\n");
	print_list(a, "A");
	print_list(b, "B");
	ft_printf("-----------------------------------\n");
	pa(b, a);
	print_list(a, "A");
	print_list(b, "B");
	ft_printf("-----------------------------------\n");
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

// Here if one of the nodes (cheapest or target) is on top of one of the stacks,
// this function will take the one that is not to the top of its stack
void finish_rotate(t_node **stack, t_node *top_node, char name)
{
	printf("AAAAAAAAAAAAA\n");
	set_nodeindex(*stack);
	while (*stack != top_node)
	{
		if (name == 'a')
		{
			if (top_node->above_median)
			{
				ra(stack);
				// ft_printf("RA   stack's index: %i\nstack's val: %i\n", (*stack)->index, (*stack)->value);
				// ft_printf("RA   cheapest value:%i\ncheapest index: %i\n", top_node->value, top_node->index);	
			}
			else
			{
				rra(stack);
//				ft_printf("stack len:%i\n", ft_stacklen(*stack));
				ft_printf("cheapest value:%i\ncheapest index: %i\n", top_node->value, top_node->index);	
				ft_printf("stack's index: %i\nstack's val: %i\n", (*stack)->index, (*stack)->value);
			}
		}
		else if (name == 'b')
		{
			if (top_node->above_median)
				rb(stack);
			else
				rrb(stack);
		}
	}
}