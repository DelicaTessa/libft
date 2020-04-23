/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/15 10:26:57 by tclement      #+#    #+#                 */
/*   Updated: 2020/04/21 11:29:33 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	size_t			index;
	unsigned char	ch;
	unsigned char	*dest;
	unsigned char	*src;

	index = 0;
	ch = (unsigned char)c;
	dest = (unsigned char *)s1;
	src = (unsigned char *)s2;
	while (index < n)
	{
		dest[index] = src[index];
		if (dest[index] == ch)
			return (dest + index + 1);
		index++;
	}
	return (NULL);
}
