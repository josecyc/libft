/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-y- <jcruz-y-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 18:33:53 by jcruz-y-          #+#    #+#             */
/*   Updated: 2019/01/21 17:24:07 by jcruz-y-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*td;
	unsigned char	*ts;

	td = (unsigned char *)dst;
	ts = (unsigned char *)src;
	if (dst == src)
		return (dst);
	if (ts < td)
	{
		ts = (unsigned char*)src + len - 1;
		td = dst + len - 1;
		while (len--)
			*td-- = *ts--;
	}
	else
	{
		while (len--)
			*td++ = *ts++;
	}
	return (dst);
}
