/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbento-a <bbento-a@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:51:50 by bbento-a          #+#    #+#             */
/*   Updated: 2023/11/16 13:52:59 by bbento-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	src_s;
	size_t	dest_s;
	size_t	i;
	size_t	j;

	src_s = ft_strlen(src);
	dest_s = ft_strlen(dest);
	i = 0;
	j = dest_s;
	if (size == 0 || size <= dest_s)
		return (size + src_s);
	while (src[i] && i < (size - dest_s - 1))
		dest[j++] = src[i++];
	dest[j] = '\0';
	return (dest_s + src_s);
}
/*
int	main(void)
{
    char dest[20] = "Hello, ";
    char src[] = "World!";
    size_t res = ft_strlcat(dest, src, sizeof(dest));

    printf("Concatenated string: %s\n", dest);
    printf("And its length: %zu\n", res);
    return (0);
}
*/
