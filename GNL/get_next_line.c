/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinni <vinni@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 14:45:33 by vipalaci          #+#    #+#             */
/*   Updated: 2023/02/14 12:02:26 by vinni            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_next_line(char *str)
{
    char    *next_line;
    int     i;
    int     j;

    
}

char    *ft_find_line(char *str)
{
    char    *line;
    int     i;

    i = 0;
    if (!str[i])
        return (NULL);
    while (str[i] && str[i] != '\n')
        i++;
    line = malloc(sizeof(char) * i + 1)
    i = 0;
    while (str[i] && str[i] != '\n')
    {
        line[i] = str[i];
        i++;
    }
    return (line);
}

char    *ft_read(int fd, char *saved)
{
    char    *buf;
    int     read_bytes;

    if (!saved)
        saved = ft_calloc(1, 1);
    buf = malloc(sizeof(char) * BUFFER_SIZE + 1);
    read_bytes = 1;
    while (read_bytes > 0)
    {
        read_bytes = read(fd, buf, BUFFER_SIZE);
        if (read_bytes == -1)
        {
            free(buf);
            return (NULL);
        }
        buf[read_bytes] = 0;
        saved = ft_strjoin(saved, buf);
        if (ft_strchr(buf, '\n'))
            break ;
    }
    free(buf);
    return (saved);
}


char	*get_next_line(int fd)
{
	static char *saved;
    char        *line;

    if (fd < 0 || BUFFER_SIZE <= 0)
        return (NULL);
    saved = ft_read(fd, saved);
    if (!saved)
        return (NULL);
    line = ft_find_line(saved);
    saved = ft_next_line(saved);
    return (line);
}