/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/15 08:28:43 by tclement      #+#    #+#                 */
/*   Updated: 2020/04/28 11:45:57 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	size_t len;

	len = 0;
	while (s[len] != '\0')
		len++;
	while (len + 1 != 0)
	{
		if (s[len] == c)
			return ((char *)s + len);
		len--;
	}
	return (NULL);
}
