/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_checker.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbento-a <bbento-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 06:05:38 by bbento-a          #+#    #+#             */
/*   Updated: 2024/05/01 15:38:23 by bbento-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	syntax_checker(char *argv)
{
	int	i;

	i = 1;
	if (!(argv[0] == '-' || argv[0] == '+'
		|| (argv[0] >= '0' && argv[0] <= '9')))
		return (1);
	if ((argv[0] == '-' || argv[0] == '+')
		&& !(argv[1] >= '0' && argv[1] <= '9'))
		return (1);
	while (argv[i])
	{
		if (!(argv[i] >= '0' && argv[i] <= '9'))
			return (1);
		i++;
	}
	return (0);
}

int	duplicate_checker(t_node *a, int n)
{
	if (!a)
		return (0);
	while (a)
	{
		if (n == a->value)
			return (1);
		a = a->next;
	}
	return (0);
}

void	error_free(t_node **stack, char **mat, bool argc_2)
{
	free_stack(stack);
	if (argc_2)
		free_mat(mat);
	write(2, "Error\n", 6);
	exit(1);
}
