/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 09:10:41 by grenaud-          #+#    #+#             */
/*   Updated: 2022/01/19 11:20:12 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

char	*ft_get_raw_line(int fd, char *raw_line);
char	*ft_get_line(char *raw_line);
char	*ft_get_start(char *raw_line);
char	*get_next_line(int fd);
size_t	ft_strlen(const char *s);
char	*ft_strjoin(char *left_str, char *buff);
char	*ft_strchr(char *s, int c);

#endif
