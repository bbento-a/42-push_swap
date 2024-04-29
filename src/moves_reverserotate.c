/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_reverserotate.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbento-a <bbento-a@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:02:41 by bbento-a          #+#    #+#             */
/*   Updated: 2024/04/23 22:14:07 by bbento-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	reverserotate(t_node **stack)
{
	t_node	*lastnode;
	int		len;

	len = ft_stacklen(*stack);
	if (len < 2 || !*stack || !stack)
		return ;
	lastnode = find_lastnode(*stack);
	lastnode->prev->next = NULL;
	lastnode->next = *stack;
	lastnode->prev = NULL;
	*stack = lastnode;
	lastnode->next->prev = lastnode;
}

void	rra(t_node **a)
{
	reverserotate(a);
	write(1, "rra\n", 4);
}

void	rrb(t_node **b)
{
	reverserotate(b);
	write(1, "rrb\n", 4);}

void	rrr(t_node **a, t_node **b)
{
	reverserotate(a);
	reverserotate(b);
	write(1, "rrr\n", 4);
}
