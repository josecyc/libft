/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-y- <jcruz-y-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 20:04:37 by jcruz-y-          #+#    #+#             */
/*   Updated: 2019/01/21 19:01:55 by jcruz-y-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;

	i = 0;
	if (s1 && s2)
	{
		if (!(str = malloc(ft_strlen(s1) + ft_strlen(s2) + 1)))
			return (NULL);
		while (*s1)
		{
			str[i] = *s1;
			s1++;
			i++;
		}
		while (*s2)
		{
			str[i] = *s2;
			s2++;
			i++;
		}
		str[i] = '\0';
		return (str);
	}
	return (NULL);
}
