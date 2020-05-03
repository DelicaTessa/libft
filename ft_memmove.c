/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/15 10:27:48 by tclement      #+#    #+#                 */
/*   Updated: 2020/05/01 15:30:49 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	unsigned char	*dest;
	unsigned char	*src;
	size_t			index;

	dest = (unsigned char*)s1;
	src = (unsigned char*)s2;
	index = 0;
	if (s1 == NULL && s2 == NULL && n > 0)
		return (NULL);
	else if (dest < src)
		ft_memcpy(dest, src, n);
	else
	{
		while (n > 0)
		{
			dest[n - 1] = src[n - 1];
			n--;
		}
	}
	return (dest);
}
