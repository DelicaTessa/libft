/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/07 09:26:35 by tclement      #+#    #+#                 */
/*   Updated: 2020/04/28 11:46:17 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	index;

	index = 0;
	if (s == NULL)
	{
		return (NULL);
	}
	str = ft_strdup(s);
	if (str == NULL)
		return (NULL);
	while (s[index] != '\0')
	{
		str[index] = (*f)(index, s[index]);
		index++;
	}
	return (str);
}
