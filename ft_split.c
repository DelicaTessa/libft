/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/13 13:34:22 by tclement      #+#    #+#                 */
/*   Updated: 2020/05/11 15:48:20 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		wordcount(const char *s, int c)
{
	int		index;
	size_t	count;

	count = 0;
	index = 0;
	while (s[index] != '\0')
	{
		if (s[index] == c && s[index + 1] != c && s[index + 1] != '\0')
			count++;
		index++;
	}
	if (count == 1)
		return (1);
	return (count + 1);
}

static char		*split_strings(char const **s, char c)
{
	size_t	index;
	size_t	idx;
	char	*str;
	char	*string;

	str = (char*)*s;
	index = 0;
	while (str[index] != '\0' && str[index] != c)
		index++;
	idx = 0;
	string = malloc(sizeof(char) * index + 1);
	if (string == NULL)
		return (NULL);
	while (idx < index)
	{
		string[idx] = *str;
		str++;
		idx++;
	}
	string[idx] = '\0';
	while (*str != '\0' && *str == c)
		str++;
	*s = str;
	return (string);
}

static char		**clear_strings(char **strings, int index)
{
	int	idx;

	idx = 0;
	while (idx < (index - 1))
	{
		if (strings[idx] != NULL)
			free(strings[idx]);
		idx++;
	}
	free(strings);
	return (NULL);
}

char			**ft_split(char const *s, char c)
{
	char	**strings;
	size_t	index;
	size_t	idx;

	if (s == NULL)
		return (NULL);
	while (*s == c && *s != '\0')
		s++;
	idx = 0;
	index = wordcount(s, c);
	strings = malloc(sizeof(char *) * (index + 1));
	if (strings == NULL)
		return (NULL);
	while (idx < index && *s != '\0')
	{
		strings[idx] = split_strings(&s, c);
		if (strings[idx] == NULL)
		{
			clear_strings(strings, index);
			return (NULL);
		}
		idx++;
	}
	strings[idx] = NULL;
	return (strings);
}
