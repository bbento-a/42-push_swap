/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbento-a <bbento-a@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:08:25 by bbento-a          #+#    #+#             */
/*   Updated: 2023/10/20 18:11:01 by bbento-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcount(char const *s, char c)
{
	int	charc;
	int	i;

	i = 0;
	charc = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			charc++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (charc);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		count;
	int		slen;
	int		i;

	i = 0;
	count = 0;
	res = ft_calloc(ft_wordcount(s, c) + 1, sizeof(char *));
	if (!res)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		slen = 0;
		while (s[slen + i] != c && s[slen + i])
			slen++;
		if (slen > 0)
		{
			res[count] = ft_substr(s, i, slen);
			count++;
		}
		i += slen;
	}
	return (res);
}
/*
int		main(void)
{
	char	*s = "Today is rainy";
	char	c = ' ';
	char	**splited = ft_split(s, c);
	int		i = 0;

	while (splited != NULL)
	{
		printf("%s\n", splited[i]);
		i++;
	}
	i = 0;
	while (splited[i])
	{
		free(splited[i]);
		i++;
	}
	return (0);
}
*/
