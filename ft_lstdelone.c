/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-y- <jcruz-y-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 18:43:04 by jcruz-y-          #+#    #+#             */
/*   Updated: 2019/01/22 14:37:19 by jcruz-y-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	t_list	**t_elem;

	t_elem = alst;
	if (alst && *t_elem && (*t_elem)->content)
	{
		del((*t_elem)->content, (*t_elem)->content_size);
		free(*t_elem);
		t_elem = NULL;
		*alst = NULL;
	}
}
