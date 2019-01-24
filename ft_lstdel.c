/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-y- <jcruz-y-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 18:42:36 by jcruz-y-          #+#    #+#             */
/*   Updated: 2019/01/21 21:18:27 by jcruz-y-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*t_tmp;

	if (alst)
	{
		while (*alst)
		{
			t_tmp = *alst;
			ft_lstdelone(alst, del);
			*alst = t_tmp->next;
		}
	}
}
