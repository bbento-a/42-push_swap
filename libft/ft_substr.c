/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbento-a <bbento-a@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:06:59 by bbento-a          #+#    #+#             */
/*   Updated: 2023/11/16 14:35:02 by bbento-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s1, unsigned int start, size_t len)
{
	char			*res;
	unsigned int	i;
	unsigned int	slen;

	if (!s1)
		return (0);
	i = 0;
	slen = ft_strlen(s1);
	if (len > slen)
		len = slen;
	if (start >= slen)
		return (ft_calloc(1, sizeof(char)));
	if (start + len > slen + 1)
		res = ft_calloc((slen - start) + 1, sizeof(char));
	else
		res = ft_calloc(len + 1, sizeof(char));
	if (!res)
		return (NULL);
	while (start < slen && i < len)
		res[i++] = s1[start++];
	res[i] = '\0';
	return (res);
}
/*
int		main(void)
{
	char	*a = "Hello";

	printf("%s\n", ft_substr(a, 0, 4));
}
*/
