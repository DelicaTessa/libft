/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/15 10:26:57 by tclement      #+#    #+#                 */
/*   Updated: 2020/05/20 12:26:13 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

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
	while (index < n)
	{
		dest[index] = src[index];
		if (dest[index] == ch)
			return (dest + index + 1);
		index++;
	}
	return (NULL);
}

/*
int main(void)
{
	char s[] = "aaaaaaaaaaa";
	char d[] = "eeeeeeefggggg";
	printf("%s", ft_memccpy(s, d, 'f', 10));
	return (0);
}
*/