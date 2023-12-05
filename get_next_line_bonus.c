/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 18:07:33 by sgabsi            #+#    #+#             */
/*   Updated: 2023/12/05 15:58:48 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_get_line(char *save)
{
	char	*line;
	int		i;

	i = 0;
	if (!save[i])
		return (NULL);
	while (save[i] && save[i] != '\n')
		i++;
	line = (char *)malloc(i + 2);
	i = 0;
	while (save[i] && save[i] != '\n')
	{
		line[i] = save[i];
		i++;
	}
	if (save[i] == '\n')
	{
		line[i] = save[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

char	*ft_sauv_reste(char *save)
{
	char	*s;
	int		i;
	int		j;

	i = 0;
	while (save[i] && save[i] != '\n')
		i++;
	if (!save[i])
	{
		free(save);
		return (NULL);
	}
	s = (char *)malloc(ft_strlen(save) - i + 1);
	if (!s)
		return (NULL);
	i++;
	j = 0;
	while (save[i])
		s[j++] = save[i++];
	s[j] = '\0';
	free(save);
	return (s);
}

char	*ft_read_save(int fd, char *save)
{
	char	*buff;
	int		nchar_read;

	buff = (char *)malloc(BUFFER_SIZE + 1);
	if (!buff)
		return (0);
	nchar_read = 1;
	while (!ft_strchr(save, '\n') && nchar_read != 0)
	{
		nchar_read = read(fd, buff, BUFFER_SIZE);
		if (nchar_read == -1)
		{
			free(buff);
			free(save);
			return (0);
		}
		buff[nchar_read] = '\0';
		if (!save)
			save = ft_strdup(buff);
		else
			save = ft_strjoin(save, buff);
	}
	free(buff);
	return (save);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*save[1024];

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	save[fd] = ft_read_save(fd, save[fd]);
	if (!save[fd])
		return (NULL);
	line = ft_get_line(save[fd]);
	save[fd] = ft_sauv_reste(save[fd]);
	return (line);
}
