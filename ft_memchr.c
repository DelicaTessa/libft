/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/15 10:28:41 by tclement      #+#    #+#                 */
/*   Updated: 2020/04/21 11:28:43 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	ch;
	size_t			index;

	ptr = (unsigned char*)s;
	ch = (unsigned char)c;
	index = 0;
	while (index < n)
	{
		if (ptr[index] == ch)
		{
			return (ptr + index);
		}
		ptr++;
		index++;
	}
	return (NULL);
}
