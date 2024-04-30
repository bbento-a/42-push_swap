/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbento-a <bbento-a@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 19:36:08 by bbento-a          #+#    #+#             */
/*   Updated: 2024/04/18 10:52:11 by bbento-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//	This function will count each char inside the of the "arguments"
static int	ft_wordsize(char *s, char c, int i)
{
	int	size;

	size = 0;
	while (s[i] && s[i] != c)
	{
		size++;
		i++;
	}
	return (size);
}

//	This function will count n "arguments" in the str
static int	ft_wordcount(char *s, char c)
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

//	In case of having the values given in only one argument
//	(for example "7 6 1 3 2"), the split will make each value an
//	individual argument inside of an array of arguments
char	**ft_split_arg(char *arg, char sep)
{
	char			**res;
	int				count;
	size_t			slen;
	unsigned int	i;

	i = 0;
	count = 0;
	res = malloc(ft_wordcount(arg, sep) + 1 * sizeof(char *));
	if (!arg || !res)
		return (NULL);
	while (count < ft_wordcount(arg, i))
	{
		while (arg[i] == sep)
			i++;
		slen = ft_wordsize(arg, sep, i);
		res[count] = ft_substr(arg, i, slen);
		if (!res[count])
			ft_free_arg(res, count);
		count++;
		i += slen;
	}
	return (res);
}
