/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ps.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbento-a <bbento-a@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 14:59:23 by bbento-a          #+#    #+#             */
/*   Updated: 2024/04/30 18:35:43 by bbento-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_node	*a;
	t_node	*b;

	a = NULL;
	b = NULL;
	if (argc < 2 || (argc == 2 && !argv[1][0]))
		return (1);
	if (argc == 2)
		argv = ft_split(argv[1], ' ');
	else
		argv = &argv[1];
	initialize_stack(&a, argv, argc == 2);
	if (!(ft_stacksorted(a)))
	{
		if (ft_stacklen(a) == 2)
			sa(&a);
		else if (ft_stacklen(a) == 3)
			three_sort(&a);
		else if (ft_stacklen(a) != 2 && ft_stacklen(a) != 3)
			main_sort(&a, &b);
	}
	free_stack(&a);
	return (0);
}
