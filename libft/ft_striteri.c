/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbento-a <bbento-a@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:30:35 by bbento-a          #+#    #+#             */
/*   Updated: 2023/10/23 16:01:35 by bbento-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

void	up(unsigned int i, char *a)
{
	unsigned int	j;

	j = 0;
	i = 32;
	while (a[j])
	{
		a[j] -= i;
		j++;
	}
}
/*
int	main(void)
{
	char	str[] = "heyy";
	
	ft_striteri(str, up);
	printf("%s\n", str);
	return (0);
}
*/
