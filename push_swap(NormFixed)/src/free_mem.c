/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_mem.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbento-a <bbento-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 10:27:47 by bbento-a          #+#    #+#             */
/*   Updated: 2024/05/01 15:29:33 by bbento-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_mat(char **mat)
{
	int	i;
	int	j;

	i = 0;
	j = count_matlen(mat);
	while (i <= j)
	{
		free(mat[i]);
		i++;
	}
	free(mat);
}

void	free_stack(t_node **stack)
{
	t_node	*tmp;
	t_node	*current;

	if (!stack)
		return ;
	current = *stack;
	while (current)
	{
		tmp = current->next;
		free(current);
		current = tmp;
	}
	*stack = NULL;
}

int	count_matlen(char **mat)
{
	int	len;

	len = 0;
	while (mat[len])
		len++;
	return (len);
}
