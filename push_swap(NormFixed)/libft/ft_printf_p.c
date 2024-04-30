/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbento-a <bbento-a@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 21:20:47 by bbento-a          #+#    #+#             */
/*   Updated: 2023/12/29 15:34:58 by bbento-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_printf_p_utils(unsigned long int ptr, int *counter)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	if (ptr >= 16)
		ft_printf_p_utils((ptr / 16), counter);
	*counter += write(1, &hexa[ptr % 16], 1);
}

int	ft_printf_p(unsigned long int ptr)
{
	int		counter;

	counter = 0;
	if (!ptr)
		return (write(1, "(nil)", 5));
	counter += write(1, "0x", 2);
	ft_printf_p_utils(ptr, &counter);
	return (counter);
}
