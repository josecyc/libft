/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_versubstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-y- <jcruz-y-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 11:17:13 by jcruz-y-          #+#    #+#             */
/*   Updated: 2019/01/17 14:28:43 by jcruz-y-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_versub(char *haystack, char *needle)
{
	int		i;

	i = 0;
	while (needle[i])
	{
		if (needle[i] != haystack[i])
			return (-1);
		i++;
	}
	return (0);
}
