/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-y- <jcruz-y-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 21:35:09 by jcruz-y-          #+#    #+#             */
/*   Updated: 2019/01/21 17:26:57 by jcruz-y-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		size;
	char	*str;
	int		sign;

	size = ft_numlenpn(n);
	sign = 0;
	if (n < 0)
	{
		sign = 1;
		n = (long long)-n;
	}
	if (n == INT_MIN)
		return (str = ft_strdup("-2147483648"));
	if (!(str = malloc(size + 1)))
		return (NULL);
	str[size] = '\0';
	while (--size >= 0)
	{
		if (size == 0 && sign == 1)
			str[size] = '-';
		else
			str[size] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}
