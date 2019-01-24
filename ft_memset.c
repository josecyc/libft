/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-y- <jcruz-y-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 17:34:03 by jcruz-y-          #+#    #+#             */
/*   Updated: 2019/01/15 19:48:17 by jcruz-y-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str1, int c, size_t len)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = (char*)str1;
	while (i < len)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (str1);
}
