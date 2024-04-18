/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbento-a <bbento-a@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 11:16:24 by bbento-a          #+#    #+#             */
/*   Updated: 2024/04/18 12:39:03 by bbento-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_main(t_node **a, t_node **b)
{
	t_node	*smallest_node;
	int		a_len;

	a_len = ft_stacklen(*a);
	while (a_len > 3)
	{
		pb(b, a);
		stack_len--;
	}
	tiny_sort(a);
	while (*b) // Here's where we're going to sort the whole stack
	{
		set_sortvals(); // setting all values and positions to the nodes;
		move_nodes(); // here is where we actually move the nodes, according to their sort values
		// we repeat this process until we have no nodes in stack b
	}
	set_current_position(*a);
	smallest_node = find_smallest(*a);
}
