/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_start.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbento-a <bbento-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 14:24:16 by bbento-a          #+#    #+#             */
/*   Updated: 2024/05/01 15:28:47 by bbento-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*find_lastnode(t_node *lst_node)
{
	if (!lst_node)
		return (NULL);
	while (lst_node->next)
		lst_node = lst_node->next;
	return (lst_node);
}

void	append_node(t_node **stack, int n)
{
	t_node	*new_node;
	t_node	*last_node;

	if (!(stack))
		return ;
	new_node = malloc(sizeof(t_node));
	if (!(new_node))
		return ;
	new_node->next = NULL;
	new_node->cheapest = false;
	new_node->value = n;
	if (!(*stack))
	{
		*stack = new_node;
		new_node->prev = NULL;
	}
	else
	{
		last_node = find_lastnode(*stack);
		last_node->next = new_node;
		new_node->prev = last_node;
	}
}

void	initialize_stack(t_node **a, char **argv, bool argc_2)
{
	long	n;
	int		i;

	n = 0;
	i = 0;
	while (argv[i])
	{
		if (syntax_checker(argv[i]))
			return (error_free(a, argv, argc_2));
		n = ft_atol(argv[i]);
		if (n < INT_MIN || n > INT_MAX)
			return (error_free(a, argv, argc_2));
		if (duplicate_checker(*a, (int)n))
			return (error_free(a, argv, argc_2));
		append_node(a, (int)n);
		i++;
	}
}
