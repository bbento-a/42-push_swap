/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbento-a <bbento-a@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:10:10 by bbento-a          #+#    #+#             */
/*   Updated: 2023/11/14 21:07:17 by bbento-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[i] == '\0')
		return ((char *)&big[i]);
	while (big[i] && len > i)
	{
		j = 0;
		while (big[i + j] == little[j] && little[j]
			&& big[i + j] && len > (i + j))
			j++;
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
/*
int		main(void)
{
	char	*a = "hfgjhtthis.,mhgtrew";
	char	*b = "this";

	char	*c = "this";
	char	*d = "this";

	printf("%s\n", ft_strnstr(c, d, 0));
	printf("%d\n", strnstr(c, d));
	printf("%s\n", strstr(a, b));
	return (0);
}
*/
