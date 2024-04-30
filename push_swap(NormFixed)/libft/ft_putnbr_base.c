/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbento-a <bbento-a@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 17:46:27 by bbento-a          #+#    #+#             */
/*   Updated: 2023/12/28 19:03:22 by bbento-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pnb(long long int nbr, int base, int counter, char flag)
{
	char	*hexa_min;
	char	*hexa_max;
	int		c;

	hexa_min = "0123456789abcdef";
	hexa_max = "0123456789ABCDEF";
	c = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		write(1, "-", 1);
		c++;
	}
	if (nbr >= base)
		counter += ft_pnb((nbr / base), base, counter, flag);
	if (flag != 'X')
		counter += write(1, &hexa_min[nbr % base], 1);
	else
		counter += write(1, &hexa_max[nbr % base], 1);
	return (counter + c);
}
