/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/13 13:33:22 by tclement      #+#    #+#                 */
/*   Updated: 2020/04/21 19:18:41 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdio.h>

char	*ft_ltrim(char *s1, const char *set)
{
	int	index;
	int len;

	index = 0;
	len = ft_strlen(s1) - 1;
	while (index < len && ft_strchr(set, s1[index]) != NULL)
	{
		index++;
	}
	return (s1 + index);
}

char	*ft_rtrim(const char *s1, const char *set)
{
	char	*str;
	int		index;

	str = ft_strdup(s1);
	index = 0;
	if (set == NULL)
	{
		set = "\t\n\v\f\r";
	}
	index = ft_strlen(str) - 1;
	while (index >= 0 && ft_strchr(set, str[index]) != NULL)
	{
		str[index] = '\0';
		index--;
	}
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	return (ft_ltrim(ft_rtrim(s1, set), set));
}
