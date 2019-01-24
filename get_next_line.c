/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-y- <jcruz-y-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 16:00:36 by jcruz-y-          #+#    #+#             */
/*   Updated: 2019/01/22 14:59:44 by jcruz-y-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_concat(char *prevline, char *buff, int r)
{
	char	*s3;
	int		i;
	int		j;

	s3 = (char *)malloc(ft_strlen(prevline) + r + 1);
	i = 0;
	j = 0;
	while (prevline && prevline[i])
	{
		s3[j] = prevline[i];
		j++;
		i++;
	}
	i = 0;
	while (i < r)
	{
		s3[j] = buff[i];
		j++;
		i++;
	}
	s3[j] = '\0';
	free(prevline);
	return (s3);
}

static char	*s(char *s, int c, int option)
{
	int		i;
	char	*str;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			if (option == 1 && s[i + 1] != '\0')
			{
				str = ft_strdup((char *)&s[i + 1]);
				free(s);
				return (str);
			}
			else if (option == 1)
			{
				free((char *)s);
				return (ft_strdup(""));
			}
			else
				return ("");
		}
		i++;
	}
	return (NULL);
}

static char	*s_inv(char *s, char c)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)malloc(ft_strlen(s) + 1);
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			str[i] = '\0';
			return (str);
		}
		str[i] = s[i];
		i++;
	}
	return (str);
}

static int	g(char **line, char **l2, int option)
{
	if (option == 1)
	{
		*line = s_inv(*l2, '\n');
		*l2 = s(*l2, '\n', 1);
	}
	else
	{
		*line = ft_strdup(*l2);
		free(*l2);
		*l2 = NULL;
	}
	return (1);
}

int			get_next_line(const int fd, char **line)
{
	char		buf[BUFF_SIZE];
	static char	*l2[5000] = {NULL};
	int			r;

	r = 0;
	if (fd < 0 || fd > 4999 || line == NULL)
		return (-1);
	if (l2[fd] != NULL && s(l2[fd], '\n', 0) != NULL && g(line, &l2[fd], 1))
		return (1);
	if (l2[fd] == NULL || s(l2[fd], '\n', 0) == NULL)
	{
		while ((r = read(fd, buf, BUFF_SIZE)) > 0)
		{
			l2[fd] = ft_concat(l2[fd], buf, r);
			if (s(l2[fd], '\n', 0) != NULL && g(line, &l2[fd], 1))
				return (1);
			if (r < BUFF_SIZE && s(l2[fd], '\n', 0) == 0 && g(line, &l2[fd], 0))
				return (1);
		}
		if (r < 0)
			return (-1);
		if (r == 0 && l2[fd] != 0 && l2[fd][0] != '\0' && g(line, &l2[fd], 0))
			return (1);
	}
	return (0);
}
