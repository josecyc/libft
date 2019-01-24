/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-y- <jcruz-y-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 19:49:43 by jcruz-y-          #+#    #+#             */
/*   Updated: 2019/01/21 17:27:39 by jcruz-y-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char		*str;
	char const	*cpy;

	cpy = s;
	if (s)
	{
		if (start + len > ft_strlen(s))
			return (NULL);
		if (!(str = malloc(len + 1)))
			return (NULL);
		while (start--)
			cpy++;
		ft_strncpy(str, cpy, len);
		str[len] = '\0';
		return (str);
	}
	return (NULL);
}
