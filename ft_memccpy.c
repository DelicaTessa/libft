/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/15 10:26:57 by tclement      #+#    #+#                 */
/*   Updated: 2020/05/11 11:40:49 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	size_t					index;
	unsigned char			ch;
	unsigned char			*dest;
	unsigned const char		*src;

	index = 0;
	ch = (unsigned char)c;
	dest = (unsigned char *)s1;
	src = (unsigned const char *)s2;
	if (s1 == NULL && s2 == NULL && n > 0)
		return (NULL);
	while (index < n)
	{
		dest[index] = src[index];
		if (dest[index] == ch)
			return (dest + index + 1);
		index++;
	}
	return (NULL);
}
