/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_mem.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbento-a <bbento-a@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 10:27:47 by bbento-a          #+#    #+#             */
/*   Updated: 2024/04/03 10:33:59 by bbento-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//	This function will free the memory allocated in case of unexpected behavior
int	ft_free_arg(char **arg, int count)
{
	int	i;

	i = 0;
	while (i <= count)
		free(arg[i++]);
	return (NULL);
}


