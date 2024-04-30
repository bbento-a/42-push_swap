/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbento-a <bbento-a@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:26:16 by bbento-a          #+#    #+#             */
/*   Updated: 2023/11/14 16:22:47 by bbento-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned int	i;

	if (!s && !c && !n)
		return (NULL);
	str = (unsigned char *)s;
	c = (unsigned char)c;
	i = 0;
	while (n > i)
	{
		if (str[i] == c)
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}
/*
int		main(void)
{
	char	*a = "This is a test";

	printf("%s\n", (char *)memchr((void *)a, 'i', 3));
	printf("%s\n", (char *)ft_memchr((void *)a, 'i', 5));
}
*/
