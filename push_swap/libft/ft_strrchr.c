/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbento-a <bbento-a@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:42:44 by bbento-a          #+#    #+#             */
/*   Updated: 2023/11/14 19:12:37 by bbento-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*res;
	int		i;

	res = (char *)s;
	i = ft_strlen(s);
	while (res[i] != (unsigned char)c && i > 0)
		i--;
	if (res[i] == (unsigned char)c)
		return (&res[i]);
	return (NULL);
}
