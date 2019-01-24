/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-y- <jcruz-y-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 21:08:00 by jcruz-y-          #+#    #+#             */
/*   Updated: 2019/01/21 17:23:41 by jcruz-y-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *restrict dst, const char *restrict src,
size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dstlen;
	size_t	len;

	i = 0;
	j = 0;
	dstlen = ft_strlen(dst);
	len = ft_strlen(src) + dstsize;
	while (dst[i])
		i++;
	if (dstsize > dstlen)
	{
		len = ft_strlen(src) + dstlen;
		while (j < (dstsize - dstlen - 1) && src[j])
		{
			dst[i] = src[j];
			j++;
			i++;
		}
		dst[i] = '\0';
	}
	return (len);
}
