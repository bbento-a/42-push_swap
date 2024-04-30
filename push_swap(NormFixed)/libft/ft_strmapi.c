/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbento-a <bbento-a@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:48:26 by bbento-a          #+#    #+#             */
/*   Updated: 2023/10/24 18:43:29 by bbento-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*res;

	if (!s || !f)
		return (NULL);
	res = ft_strdup(s);
	i = 0;
	if (!res)
		return (NULL);
	while (res[i])
	{
		res[i] = f(i, s[i]);
		i++;
	}
	return (res);
}
/*
char	up(unsigned int i, char a)
{
	i = 32;
	a -= i;
	return (a);
}

int		main(void)
{
	char	str[] = "heyy";
	
	printf("%s\n", ft_strmapi(str, up));
}
*/
