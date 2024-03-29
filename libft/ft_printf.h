/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbento-a <bbento-a@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 10:55:46 by bbento-a          #+#    #+#             */
/*   Updated: 2023/12/28 18:46:19 by bbento-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

// MAIN FUNCTIONS
int	ft_printf(const char *s, ...);
int	ft_printf_c(char c);
int	ft_printf_s(char *s);
int	ft_printf_p(unsigned long int ptr);
// SUPPORT FUNCTIONS
int	ft_pnb(long long int nbr, int base, int counter, char flag);

#endif
