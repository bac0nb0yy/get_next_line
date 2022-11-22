/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtelnov <dtelnov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 18:48:03 by dtelnov           #+#    #+#             */
/*   Updated: 2022/11/18 18:48:03 by dtelnov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	len;
	size_t	len2;
	char	*tmp;
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1);
	tmp = malloc(sizeof(char) * (len + ft_strlen(s2) + 1));
	if (!tmp)
		return (NULL);
	len2 = 0;
	i = 0;
	while (s1[i])
		tmp[len2++] = s1[i++];
	i = 0;
	while (s2[i])
		tmp[len2++] = s2[i++];
	tmp[len2] = 0;
	return (tmp);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*ptr;
	const size_t	bytes = nmemb * size;

	if (size > 0 && nmemb > (size_t)-1 / size)
		return (NULL);
	ptr = malloc(bytes);
	if (ptr != NULL && nmemb != 0 && size != 0)
		ft_memset(ptr, 0, bytes);
	return (ptr);
}

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			return ((char *)(s + i));
		i++;
	}
	if (s[i] == (unsigned char)c)
		return ((char *)(s + i));
	return (NULL);
}

size_t	ft_strlen(char *str)
{
	register char	*s;

	s = str;
	while (*s)
		++s;
	return (s - str);
}

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(unsigned char *)(s + i) = (unsigned char)c;
		i++;
	}
	return (s);
}
