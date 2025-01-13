/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afailde- <afailde-@student.42Madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 10:57:10 by afailde-          #+#    #+#             */
/*   Updated: 2024/05/20 13:13:18 by afailde-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10000000
# endif

# include <fcntl.h>
# include <limits.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdint.h>
# include <stddef.h>
# include <string.h>

int		ft_strlen(const char *str);
void	*ft_memcpy(void *dest, const void *src, size_t num);
char	*get_next_line(int fd);
char	*ft_strdup(const char *source);
char	*ft_strchr(const char *a, int character);
char	*ft_strjoin(char *s1, char *s2);
size_t	ft_strlcpy(char *dest, const char *src, size_t numb);

#endif