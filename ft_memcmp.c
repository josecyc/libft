/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-y- <jcruz-y-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 08:39:38 by jcruz-y-          #+#    #+#             */
/*   Updated: 2019/01/21 17:28:11 by jcruz-y-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char*)s1 == *(unsigned char*)s2)
		{
			i++;
			s1++;
			s2++;
		}
		else
			return (*(unsigned char*)s1 - *(unsigned char*)s2);
	}
	return (0);
}
