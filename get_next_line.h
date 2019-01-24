/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-y- <jcruz-y-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 15:57:58 by jcruz-y-          #+#    #+#             */
/*   Updated: 2019/01/22 14:57:37 by jcruz-y-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>
# include <sys/types.h>
# include <unistd.h>
# include <sys/uio.h>
# include <string.h>
# include "libft.h"

static char	*s(char *s, int c, int option);
static char	*s_inv(char *s, char c);
static char	*ft_concat(char *prevline, char *buff, int r);
int			get_next_line(const int fd, char **line);

#endif
