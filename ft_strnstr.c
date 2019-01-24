/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-y- <jcruz-y-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 10:42:14 by jcruz-y-          #+#    #+#             */
/*   Updated: 2019/01/21 20:55:32 by jcruz-y-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_versubstri(char *haystack, char *needle)
{
	size_t		i;

	i = 0;
	while (needle[i])
	{
		if (needle[i] != haystack[i])
			return (-1);
		i++;
	}
	return (i);
}

char			*ft_strnstr(const char *haystack, const char *needle,
size_t len)
{
	size_t		i;

	i = 0;
	if (ft_strcmp(needle, "") == 0)
		return ((char*)haystack);
	while (i < len && *haystack)
	{
		if (*haystack == needle[0])
		{
			if (ft_versubstri((char*)haystack, (char*)needle) !=
			(unsigned long long)-1 &&
			ft_versubstri((char*)haystack, (char*)needle) <= (len - i))
				return ((char *)haystack);
		}
		haystack++;
		i++;
	}
	return (NULL);
}
