/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/15 10:27:48 by tclement      #+#    #+#                 */
/*   Updated: 2020/04/21 12:12:29 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	size_t			index;
	unsigned char	*dest;
	unsigned char	*src;
	unsigned char	*temp;

	index = 0;
	dest = (unsigned char *)s1;
	src = (unsigned char *)s2;
	temp = src;
	while (index < n)
	{
		dest = temp;
		index++;
	}
	return (dest);
}
