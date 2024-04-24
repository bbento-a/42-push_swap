/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_start.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbento-a <bbento-a@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 14:24:16 by bbento-a          #+#    #+#             */
/*   Updated: 2024/04/23 22:16:13 by bbento-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// This function is going to find the last node of the linked list
t_node	*find_lastnode(t_node *lst_node)
{
	if (!lst_node)
		return (NULL);
	while (lst_node->next)
		lst_node = lst_node->next;
	return (lst_node);
}

// This function is going to append a new node with n value to the stack.It
// will "attach" the new node if there are already nodes to the end of the list
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

// This function will iterate all arguments and append the value to a new node
void	initialize_stack(t_node **a, char **argv)
{
	long	n;
	int		i;

	i = 0;
	while (argv[i])
	{
		if (syntax_checker(argv[i]))
			return (error_free(a, argv));
		n = ft_atol(argv[i]);
		if (n < INT_MIN || n > INT_MAX)
			return (error_free(a, argv));
		if (duplicate_checker(*a, (int)n))
			return (error_free(a, argv));
		append_node(a, (int)n);
		i++;
	}
}
