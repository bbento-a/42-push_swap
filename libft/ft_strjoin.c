/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbento-a <bbento-a@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:36:22 by bbento-a          #+#    #+#             */
/*   Updated: 2023/11/16 14:37:21 by bbento-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*res;
	int			i;
	int			j;

	i = ft_strlen(s1);
	j = ft_strlen(s2);
	res = malloc(((i + j) * sizeof(char)) + 1);
	if (!res)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		res[i] = s1[i];
		i++;
	}
	while (s2[j])
		res[i++] = s2[j++];
	res[i] = '\0';
	return (res);
}
/*
int		main(void)
{
	char	*a = "Hello";
	char	*b = " Heyy";

	printf("%s\n", ft_strjoin(a, b));
}
*/
