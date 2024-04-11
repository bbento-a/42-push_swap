/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_reverserotate.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbento-a <bbento-a@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:02:41 by bbento-a          #+#    #+#             */
/*   Updated: 2024/04/11 17:09:59 by bbento-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	reverserotate(t_node **stack)
{

}

void	rra(t_node **a)
{
	reverserotate(a);
	ft_printf("rra\n");
}

void	rrb(t_node **b)
{
	reverserotate(b);
	ft_printf("rrb\n");
}

void	rrr(t_node **a, t_node **b)
{
	reverserotate(a);
	reverserotate(b);
	ft_printf("rrr\n");
}
