/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbento-a <bbento-a@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 11:16:24 by bbento-a          #+#    #+#             */
/*   Updated: 2024/04/17 12:23:39 by bbento-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_main(t_node **a, t_node **b)
{
	int	stack_len;

	stack_len = ft_stacklen(t_node **stack);
	while (stack_len > 3)
	{
		pb(b, a);
		stack_len--;
	}
	tiny_sort(a);
}
