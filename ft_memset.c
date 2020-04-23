/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/07 09:26:48 by tclement      #+#    #+#                 */
/*   Updated: 2020/04/21 11:24:37 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *s;

	s = (unsigned char *)b;
	while (len > 0)
	{
		s[len] = c;
		len--;
	}
	return (s);
}
