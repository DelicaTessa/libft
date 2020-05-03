/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/13 13:34:22 by tclement      #+#    #+#                 */
/*   Updated: 2020/05/03 13:28:15 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_wordcount(char const *s, char c)
{
	size_t	index;
	size_t	wc;

	index = 0;
	wc = 0;
	while (s[index] != '\0')
	{
		while (s[index] == c)
			index++;
		if (s[index] != '\0')
			wc++;
		while (s[index] != c && s[index] != '\0')
			index++;
	}
	return (wc);
}

static char		*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t index;

	index = 0;
	if (dest == NULL || src == NULL)
		return (NULL);
	while (index < n)
	{
		if (*src != '\0')
		{
			*dest = *src;
		}
		else
			*dest = '\0';
		index++;
		src++;
		dest++;
	}
	*dest = '\0';
	dest -= index;
	return (dest);
}

static char		*ft_strndup(const char *s, size_t n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * n + 1);
	if (str == NULL)
		return (NULL);
	if (s == NULL)
		return (NULL);
	str = ft_strncpy(str, s, n);
	return (str);
}

char			**ft_split(char const *s, char c)
{
	int				index;
	int				start;
	int				idx;
	char			**strings;

	index = 0;
	idx = 0;
	strings = malloc(sizeof(char *) * (ft_wordcount(s, c)) + 1);
	if (strings == NULL)
		return (NULL);
	while (s[index] != '\0')
	{
		while (s[index] == c)
			index++;
		start = index;
		while (s[index] && s[index] != c)
			index++;
		if (index > start)
		{
			strings[idx] = ft_strndup(s + start, index - start);
			idx++;
		}
	}
	strings[idx] = NULL;
	return (strings);
}
