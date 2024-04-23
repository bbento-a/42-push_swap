/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_rotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbento-a <bbento-a@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 14:40:14 by bbento-a          #+#    #+#             */
/*   Updated: 2024/04/23 22:18:15 by bbento-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_node **stack)
{
	t_node	*lastnode;
	int		len;

	len = ft_stacklen(*stack);
	if (len < 2 || !*stack || !stack)
		return ;
	lastnode = find_lastnode(*stack);
	lastnode->next = *stack;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	lastnode->next->prev = lastnode;
	lastnode->next->next = NULL;
}

void	ra(t_node **a)
{
	rotate(a);
	write(1, "ra\n", 3);
}

void	rb(t_node **b)
{
	rotate(b);
	write(1, "rb\n", 3);
}

void	rr(t_node **a, t_node **b)
{
	rotate(a);
	rotate(b);
	write(1, "rr\n", 3);
}
