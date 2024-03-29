/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbento-a <bbento-a@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 14:48:00 by bbento-a          #+#    #+#             */
/*   Updated: 2023/11/16 13:58:34 by bbento-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*res;
	int		i;

	res = (char *)s;
	i = 0;
	while (res[i])
	{
		if ((unsigned char)res[i] == (unsigned char)c)
			return (&res[i]);
		i++;
	}
	if ((unsigned char)res[i] == (unsigned char)c)
		return (&res[i]);
	return (NULL);
}
/*
int	main(void)
{
	char	*a = "Hello";

	printf("strchr: %s\n", strchr(a, 'e'));
	printf("ft_strchr: %s\n", ft_strchr(a, 'e'));
}
*/
