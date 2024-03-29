/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbento-a <bbento-a@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:12:29 by bbento-a          #+#    #+#             */
/*   Updated: 2023/11/16 13:38:41 by bbento-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	char			*s1;
	char			*s2;

	if (!src && !dest)
		return (dest);
	s1 = (char *)src;
	s2 = (char *)dest;
	i = 0;
	while (n > i)
	{
		s2[i] = s1[i];
		i++;
	}
	return (dest);
}
/*
int	main (void)
{
	char	src[] = "This is a test";
	char	dest[] = "Hello";

	printf("%s\n", (char *)memcpy(dest, src, 5));
	printf("%s\n", (char *)ft_memcpy(dest, src, 5));
	return (0);
}
*/
