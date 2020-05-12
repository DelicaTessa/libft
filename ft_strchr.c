/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/14 21:08:12 by tclement      #+#    #+#                 */
/*   Updated: 2020/05/11 12:50:01 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	index;

	index = 0;
	while (s[index] != '\0' || c == '\0')
	{
		if (s[index] == (char)c)
			return ((char *)s + index);
		index++;
	}
	return (NULL);
}
