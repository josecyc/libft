/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrstrnew.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-y- <jcruz-y-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 12:27:56 by jcruz-y-          #+#    #+#             */
/*   Updated: 2019/01/21 17:21:26 by jcruz-y-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_arrstrnew(char **s, char c)
{
	int		l;
	char	*str;

	l = 0;
	while (**s == c)
		*s = *s + 1;
	while ((*s)[l] != c && (*s)[l] != '\0')
		l++;
	str = ft_strnew(l + 1);
	str = ft_strncpy(str, *s, l);
	str[l] = '\0';
	*s += l;
	return (str);
}
