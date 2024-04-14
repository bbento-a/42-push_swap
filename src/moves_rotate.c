/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_rotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbento-a <bbento-a@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 14:40:14 by bbento-a          #+#    #+#             */
/*   Updated: 2024/04/14 15:56:22 by bbento-a         ###   ########.fr       */
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
	*stack = *stack->next;
	*stack->prev = NULL;
	lastnode->next->prev = lastnode;
	lastnode->next->next = NULL;
}

void	ra(t_node **a)
{
	rotate(a);
	ft_printf("ra\n");
}

void	rb(t_node **b)
{
	rotate(b);
	ft_printf("rb\n");
}

void	rr(t_node **a, t_node **b)
{
	rotate(a);
	rotate(b);
	ft_printf("rr\n");
}
