/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_mem.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbento-a <bbento-a@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 10:27:47 by bbento-a          #+#    #+#             */
/*   Updated: 2024/04/14 20:48:48 by bbento-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//	Function to free the memory allocated of an argument,
//	in case of unexpected behavior
char	**ft_free_arg(char **arg, int count)
{
	int	i;

	i = 0;
	while (i <= count)
		free(arg[i++]);
	return (NULL);
}

//	Function to free the matrix of chars (in this case)
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

//	Function to free each node of the stack
void	free_stack(t_node **stack)
{
	t_node	*tmp;
	t_node 	*current;

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
