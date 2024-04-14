/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_checker.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbento-a <bbento-a@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 06:05:38 by bbento-a          #+#    #+#             */
/*   Updated: 2024/04/14 20:47:11 by bbento-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Here we check for any syntax errors. There can't be any other characters
// besides numbers, and one - or + symbols before the value
int	syntax_checker(char *argv)
{
	int	i;

	i = 0;
	if (!(argv[0] == '-' || argv [0] == '+'
			|| (argv[0] >= '0' && argv[0] <= '9')))
		return (1);
	if (argv[0] == '-' || argv[0] == '+'
		&& (argv[1] < '0' && argv[1] > '9'))
		return (1);
	while (argv[++i])
		if (argv[i] < '0' && argv[i] > '9')
			return (1);
	return (0);
}

// In this checker we verify if there's any value duplicated, and if there is,
// we return an error message. The first if statment is used just when we have
// no nodes yet attached to the stack
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

//	I use this function to free everything allocated before exit the program and
//	write a error message so the user understands something unexpected happened
void	error_free(t_node **stack, char **mat)
{
	free_stack(stack);
	free_mat(mat);
	ft_printf("Error\n");
	exit(1);
}
