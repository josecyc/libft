/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-y- <jcruz-y-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 22:20:55 by jcruz-y-          #+#    #+#             */
/*   Updated: 2019/01/18 17:59:37 by jcruz-y-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	char	*str;

	if (!s)
		return (NULL);
	i = ft_strlen(s);
	while (i > 0 && (s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n'))
		i--;
	while (*s == ' ' || *s == '\t' || *s == '\n')
	{
		if (i != 0)
			i--;
		s++;
	}
	if (i)
	{
		str = ft_strnew(i);
		if (!str)
			return (NULL);
		ft_strncpy(str, s, i);
		str[i] = '\0';
		return (str);
	}
	str = ft_strnew(0);
	return (str);
}
