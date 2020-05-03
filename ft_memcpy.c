/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/15 10:26:11 by tclement      #+#    #+#                 */
/*   Updated: 2020/05/01 15:30:36 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	size_t			index;
	unsigned char	*dest;
	unsigned char	*src;

	index = 0;
	dest = (unsigned char *)s1;
	src = (unsigned char *)s2;
	if (s1 == NULL && s2 == NULL && n > 0)
	{
		return (NULL);
	}
	else
	{
		while (index < n)
		{
			dest[index] = src[index];
			index++;
		}
		return ((char *)s1);
	}
}
