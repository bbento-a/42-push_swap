/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_swap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbento-a <bbento-a@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 14:57:33 by bbento-a          #+#    #+#             */
/*   Updated: 2024/04/14 15:31:02 by bbento-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_node **ptr)
{
	int len;

	len = stack_len(*ptr);
	if (len < 2 || !*ptr || !ptr)
		return ;
	*ptr = *ptr->next;
	*ptr->prev->prev = *ptr;
	*ptr->prev->next = *ptr->next;
	if (len == 2)
		*ptr->next->prev = *ptr->prev;
	*ptr->next = *ptr->prev;
	*ptr->prev = NULL;
}

void	sa(t_node **a)
{
	swap(a);
	ft_printf("sa\n");
}

void	sb(t_node **b)
{
	swap(b);
	ft_printf("sb\n");
}

void	ss(t_node **a, t_node **b)
{
	swap(a);
	swap(b);
	ft_printf("ss\n");
}
