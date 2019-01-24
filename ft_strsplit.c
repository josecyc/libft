/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-y- <jcruz-y-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 21:45:39 by jcruz-y-          #+#    #+#             */
/*   Updated: 2019/01/22 13:54:23 by jcruz-y-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**strarr;
	int		j;
	int		numwords;
	int		l;

	numwords = ft_numwords((char *)s, c);
	l = 0;
	j = 0;
	if (!s || c == 0)
		return (NULL);
	if (!(strarr = (char**)malloc(sizeof(char*) * (numwords + 1))))
		return (NULL);
	strarr[numwords] = NULL;
	while (j < numwords)
	{
		strarr[j] = ft_arrstrnew((char**)&s, c);
		j++;
	}
	return (strarr);
}
