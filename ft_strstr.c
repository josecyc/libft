/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-y- <jcruz-y-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 09:08:13 by jcruz-y-          #+#    #+#             */
/*   Updated: 2019/01/17 14:28:12 by jcruz-y-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	if (!needle[0] || ft_strcmp(needle, "") == 0)
		return ((char*)haystack);
	while (*haystack)
	{
		if (*haystack == needle[0])
		{
			if (ft_versub((char*)haystack, (char*)needle) == 0)
				return ((char *)haystack);
		}
		haystack++;
	}
	return (NULL);
}
