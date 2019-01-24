/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-y- <jcruz-y-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 14:58:40 by jcruz-y-          #+#    #+#             */
/*   Updated: 2019/01/22 20:05:00 by jcruz-y-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstrev(t_list *lst, t_list *lstnx)
{
	if (lstnx->next == NULL)
	{
		lstnx->next = lst;
		lst->next = NULL;
		return ;
	}
	else
	{
		ft_lstrev(lstnx, lstnx->next);
		lstnx->next = lst;
		lst->next = NULL;
	}
}
