/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbento-a <bbento-a@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 16:32:39 by bbento-a          #+#    #+#             */
/*   Updated: 2023/11/16 14:41:55 by bbento-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		start;
	int		end;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (s1[start] && ft_strchr(set, s1[end]))
		end--;
	res = (ft_substr(s1, start, end - start + 1));
	return (res);
}
/*
int		main(void)
{
	char	*s1 = "abc1234bica";
	char	set[] = {'a', 'b', 'c'}; 

	printf("%s\n", ft_strtrim(s1, set));
}
*/
