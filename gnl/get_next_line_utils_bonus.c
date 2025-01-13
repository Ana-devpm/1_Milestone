/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afailde- <afailde-@student.42Madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:31:28 by afailde-          #+#    #+#             */
/*   Updated: 2024/05/20 12:31:51 by afailde-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int	ft_strlen(const char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
		length++;
	return (length);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t numb)
{
	size_t	a;

	if ((!dest || !src) && numb == 0)
		return (0);
	a = 0;
	if (numb > 0)
	{
		while (src[a] != '\0' && a < (numb -1))
		{
			dest[a] = src[a];
			a++;
		}
		dest[a] = '\0';
	}
	return (ft_strlen(src));
}

char	*ft_strdup(const char *source)
{
	size_t	size;
	char	*dest;

	size = ft_strlen(source);
	dest = malloc (size * sizeof (char) + 1);
	if (!dest)
		return (NULL);
	ft_memcpy (dest, source, size);
	dest[size] = '\0';
	return (dest);
}

void	*ft_memcpy(void *dest, const void *src, size_t num)
{
	size_t				a;
	unsigned char		*finaldest;
	const unsigned char	*finalsrc;

	if (!dest && !src)
		return (0);
	a = 0;
	finaldest = (unsigned char *)dest;
	finalsrc = (const unsigned char *)src;
	while (a < num)
	{
		finaldest[a] = finalsrc[a];
		a++;
	}
	return (dest);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*new;
	int		in1;
	int		in2;

	in1 = -1;
	in2 = -1;
	if (s1 && !s2)
		return (ft_strdup(s1));
	else if (!s1 && s2)
		return (ft_strdup(s2));
	else if (!s1 && !s2)
		return (ft_strdup (""));
	new = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!new)
		return (NULL);
	while (s1[++in1])
		new[in1] = s1[in1];
	while (s2[++in2])
	{
		new[in1] = s2[in2];
		in1++;
	}
	new[in1] = '\0';
	return (new);
}
