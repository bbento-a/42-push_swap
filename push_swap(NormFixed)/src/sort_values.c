/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_values.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbento-a <bbento-a@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 17:45:24 by bbento-a          #+#    #+#             */
/*   Updated: 2024/05/01 10:38:11 by bbento-a         ###   ########.fr       */
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

void	set_nodeindex(t_node *stack)
{
	int	i;
	int	middle;

	i = 0;
	if (!stack)
		return ;
	middle = ft_stacklen(stack) / 2;
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

void	set_targetnode(t_node *a, t_node *b)
{
	t_node	*target_node;
	t_node	*current_a;
	long	best_index;

	while (b)
	{
		best_index = LONG_MAX;
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
			b->target_node = find_smallest(a);
		else
			b->target_node = target_node;
		b = b->next;
	}
}

void	set_price(t_node *a, t_node *b)
{
	int	len_a;
	int	len_b;

	len_a = ft_stacklen(a);
	len_b = ft_stacklen(b);
	while (b)
	{
		b->price = b->index;
		if (!(b->above_median))
			b->price = len_b - (b->index);
		if (b->target_node->above_median)
			b->price += b->target_node->index;
		else
			b->price += len_a - (b->target_node->index);
		b = b->next;
	}
}

void	set_cheapest(t_node *b)
{
	t_node	*best_case;
	long	bestcase_val;

	if (!b)
		return ;
	bestcase_val = LONG_MAX;
	while (b)
	{
		if (b->price < bestcase_val)
		{
			bestcase_val = b->price;
			best_case = b;
		}
		b = b->next;
	}
	best_case->cheapest = true;
}
