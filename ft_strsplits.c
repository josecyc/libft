/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-y- <jcruz-y-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 20:52:27 by jcruz-y-          #+#    #+#             */
/*   Updated: 2019/01/21 20:53:09 by jcruz-y-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_words(char const *s, char c, char d, char e)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		while (*s != '\0' && *s != c && *s != d && *s != e)
			s++;
		while (*s == c || *s == d || *s == e)
			s++;
	}
	return (len);
}

static char	**get_words(char **result, char const *s, char *st, int len)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (j < len)
	{
		while (s[i] != '\0' && s[i] != st[0] && s[i] != st[1] && s[i] != st[2])
			i++;
		result[j] = ft_strnew(i + 1);
		result[j] = ft_strncpy(result[j], s, i);
		result[j][i] = '\0';
		s += i;
		i = 0;
		j++;
		while (*s == st[0] || *s == st[1] || *s == st[2])
			s++;
	}
	result[j] = 0;
	return (result);
}

char		**ft_strsplits(char const *s, char *str)
{
	char	**result;
	int		len;

	if (!s || ft_strcmp(s, "") == 0)
		return (NULL);
	while (*s == str[0] || *s == str[1] || *s == str[2])
		s++;
	len = num_words(s, str[0], str[1], str[2]);
	result = (char **)malloc(sizeof(char *) * len + 1);
	if (!result)
		return (NULL);
	result = get_words(result, s, str, len);
	return (result);
}
