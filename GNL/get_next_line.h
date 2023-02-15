/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinni <vinni@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 11:27:11 by vinni             #+#    #+#             */
/*   Updated: 2023/02/15 18:19:06 by vinni            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);
char	*ft_read_and_save(int fd, char *saved);
char	*ft_find_line(char *saved);
char	*ft_next_line(char *saved);
char	*ft_strjoin(char *s1, char *s2);
size_t	ft_strlen(const char *s);
char	*ft_strcpy(char *dst, char *src);
char	*ft_strcat(char *dst, char *src);
char	*ft_strchr(const char *s, int c);

#endif
