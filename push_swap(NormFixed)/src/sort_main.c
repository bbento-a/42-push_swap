/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbento-a <bbento-a@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 11:16:24 by bbento-a          #+#    #+#             */
/*   Updated: 2024/05/01 10:41:50 by bbento-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	main_sort(t_node **a, t_node **b)
{
	t_node	*smallest_node;
	int		a_len;

	a_len = ft_stacklen(*a);
	ft_printf("First Len: %d\n", a_len);
	while (a_len > 3)
	{
		pb(a, b);
		a_len--;
	}
	three_sort(a);
	while (*b)
	{
		set_sortvals(*a, *b);
		move_nodes(a, b);
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

void	move_nodes(t_node **a, t_node **b)
{
	t_node	*cheapest;

	cheapest = return_cheapest(*b);
	if (cheapest->above_median && cheapest->target_node->above_median)
		rotate_ab(a, b, cheapest);
	else if (!(cheapest->above_median)
		&& !(cheapest->target_node->above_median))
		rev_rotate_ab(a, b, cheapest);
	finish_rotate(b, cheapest, 'b');
	finish_rotate(a, cheapest->target_node, 'a');
	pa(b, a);
}

void	rotate_ab(t_node **a, t_node **b, t_node *cheapest)
{
	while (*a != cheapest->target_node && *b != cheapest)
		rr(a, b);
	set_nodeindex(*a);
	set_nodeindex(*b);
}

void	rev_rotate_ab(t_node **a, t_node **b, t_node *cheapest)
{
	while (*a != cheapest->target_node && *b != cheapest)
		rrr(a, b);
	set_nodeindex(*a);
	set_nodeindex(*b);
}

void	finish_rotate(t_node **stack, t_node *top_node, char name)
{
	set_nodeindex(*stack);
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
				rb(stack);
			else
				rrb(stack);
		}
	}
}
