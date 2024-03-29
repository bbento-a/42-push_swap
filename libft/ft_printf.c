/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbento-a <bbento-a@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 11:03:07 by bbento-a          #+#    #+#             */
/*   Updated: 2023/12/29 15:33:33 by bbento-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format_flags(va_list args, const char format)
{
	int	counter;

	counter = 0;
	if (format == '%')
		counter += ft_printf_c('%');
	else if (format == 'c')
		counter += ft_printf_c(va_arg(args, int));
	else if (format == 's')
		counter += ft_printf_s(va_arg(args, char *));
	else if (format == 'p')
		counter += ft_printf_p(va_arg(args, unsigned long int));
	else if (format == 'd' || format == 'i')
		counter += ft_pnb(va_arg(args, int), 10, counter, format);
	else if (format == 'u')
		counter += ft_pnb(va_arg(args, unsigned int), 10, counter, format);
	else if (format == 'x')
		counter += ft_pnb(va_arg(args, unsigned int), 16, counter, format);
	else if (format == 'X')
		counter += ft_pnb(va_arg(args, unsigned int), 16, counter, format);
	return (counter);
}

int	ft_printf(const char *s, ...)
{
	int		counter;
	int		i;
	va_list	args;

	va_start(args, s);
	counter = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == '%')
		{
			counter += ft_format_flags(args, s[i + 1]);
			i++;
		}
		else
			counter += ft_printf_c(s[i]);
		i++;
	}
	va_end(args);
	return (counter);
}
