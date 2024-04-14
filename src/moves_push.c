/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbento-a <bbento-a@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:00:12 by bbento-a          #+#    #+#             */
/*   Updated: 2024/04/14 20:21:20 by bbento-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push(t_node **stacksrc, t_node **stackdest)
{
	t_node	*node_push;

	if (!*stacksrc)
		return ;
	node_push = *src;
	*src = *src->next;
	if (*src) // In case there's more than 1 node in the stack
		*src->prev = NULL;
	node_push->prev = NULL;
	if (!*stackdest) //In case stackdest has no nodes yet
	{
		*stackdest = node_push;
		node_push->next = NULL;
	}
	else
	{
		node_push->next = *stackdest;
		node_push->next->prev = node_push;
		*dest = node_push; //head ptr needs to be "updated" to the 1st node in the stack
	}
}

void	pa(t_node **b, t_node **a)
{
	push(b, a);
	ft_printf("pa\n");
}

void	pb(t_node **a, t_node **b)
{
	push(b);
	ft_printf("pb\n");
}
