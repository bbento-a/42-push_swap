/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbento-a <bbento-a@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 11:13:19 by bbento-a          #+#    #+#             */
/*   Updated: 2024/04/23 22:59:10 by bbento-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void three_sort(t_node **stack)
{
	t_node *highestval;

	highestval = find_highest(*stack);
	if (*stack == highestval)
	{
		ra(stack);
	}
	else if ((*stack)->next == highestval)
	{
		rra(stack);
	}
	if ((*stack)->value > (*stack)->next->value)
		sa(stack);
}

t_node *find_highest(t_node *stack)
{
	t_node *highestval;
	long check_highest;

	if (!stack)
		return (NULL);
	check_highest = INT_MIN;
	while (stack)
	{
		if (stack->value > check_highest)
		{
			highestval = stack;
			check_highest = stack->value;
		}
		stack = stack->next;
	}
	return (highestval);
}

t_node *find_smallest(t_node *stack)
{
	t_node *smallestval;
	long check_smallest;

	if (!stack)
		return (NULL);
	check_smallest = INT_MAX;
	while (stack)
	{
		if (stack->value < check_smallest)
		{
			smallestval = stack;
			check_smallest = stack->value;
		}
		stack = stack->next;
	}
	return (smallestval);
}
