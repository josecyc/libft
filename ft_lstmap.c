/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-y- <jcruz-y-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 18:43:16 by jcruz-y-          #+#    #+#             */
/*   Updated: 2019/01/22 08:22:50 by jcruz-y-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*begin;
	t_list	*t_elem;

	if (!lst)
		return (NULL);
	begin = f(lst);
	t_elem = begin;
	while (lst->next)
	{
		lst = lst->next;
		t_elem->next = f(lst);
		t_elem = t_elem->next;
	}
	return (begin);
}
