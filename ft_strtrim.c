/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/13 13:33:22 by tclement      #+#    #+#                 */
/*   Updated: 2020/04/28 14:24:33 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

static	char	*ltrim(char const *s1, const char *set)
{
	int		index;
	int		len;
	char	*str;

	index = 0;
	if (s1 == NULL)
		return (NULL);
	str = ft_strdup(s1);
	if (str == NULL)
		return (NULL);
	len = ft_strlen(str);
	while (index < len && ft_strchr(set, str[index]) != NULL)
	{
		index++;
	}
	ft_strlcpy(str, str + index, len + 2);
	return (str);
}

static	char	*rtrim(char const *s1, const char *set)
{
	char	*str;
	int		index;

	if (s1 == NULL)
	{
		return (NULL);
	}
	str = ltrim(s1, set);
	if (str == NULL)
		return (NULL);
	index = ft_strlen(str);
	while (index >= 0 && ft_strchr(set, str[index]) != NULL)
	{
		str[index] = '\0';
		index--;
	}
	return (str);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	if (s1 == NULL)
	{
		return (NULL);
	}
	return (ltrim(rtrim(s1, set), set));
}
