/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbento-a <bbento-a@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:13:19 by bbento-a          #+#    #+#             */
/*   Updated: 2023/11/14 15:15:30 by bbento-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	counter(int num)
{
	long	count;
	int		n;

	count = 0;
	n = (long)num;
	if (n < 0)
	{
		count++;
		n *= -1;
	}
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long	count;
	long	nl;
	char	*res;

	count = counter(n);
	res = ft_calloc(count + 1, sizeof(char));
	if (!res)
		return (NULL);
	nl = n;
	res[0] = '0';
	if (nl < 0)
	{
		nl *= -1;
		res[0] = '-';
	}
	count--;
	while (nl > 0)
	{
		res[count] = (nl % 10) + '0';
		nl /= 10;
		count--;
	}
	return (res);
}
/*
int        main(void)
{
    printf("%d\n", counter(-2147483648));
	printf("%s\n", ft_itoa(-2147483648));
}
*/
