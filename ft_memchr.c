/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/15 10:28:41 by tclement      #+#    #+#                 */
/*   Updated: 2020/05/20 12:20:44 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned const char	*ptr;
	size_t				index;

	ptr = (unsigned const char*)s;
	index = 0;
	while (index < n)
	{
		if (ptr[index] == (unsigned char)c)
		{
			return ((char *)s + index);
		}
		index++;
	}
	return (NULL);
}

/*
int main(void)
{
	char s[] = "lorem ipsum dolor amet";
	printf("%s", ft_memchr(s, 'e', 7));
	return (0);
}
*/