/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-y- <jcruz-y-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 18:11:43 by jcruz-y-          #+#    #+#             */
/*   Updated: 2019/01/21 20:53:23 by jcruz-y-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*lstnew;

	if (!(lstnew = malloc(sizeof(t_list))))
		return (NULL);
	lstnew->next = NULL;
	if (content == NULL)
	{
		lstnew->content = NULL;
		lstnew->content_size = 0;
		return (lstnew);
	}
	lstnew->content = ft_strdup(content);
	lstnew->content_size = content_size;
	return (lstnew);
}
