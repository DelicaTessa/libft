/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/15 10:26:11 by tclement      #+#    #+#                 */
/*   Updated: 2020/04/21 12:11:56 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	size_t			index;
	unsigned char	*dest;
	unsigned char	*src;

	index = 0;
	dest = (unsigned char *)s1;
	src = (unsigned char *)s2;
	while (index < n)
	{
		dest = src;
		index++;
	}
	return (dest);
}
