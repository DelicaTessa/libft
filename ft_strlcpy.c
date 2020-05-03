/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/10 14:39:07 by tclement      #+#    #+#                 */
/*   Updated: 2020/04/28 10:03:10 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t		srcsize;
	int			index;

	index = 0;
	srcsize = 0;
	if (src == NULL || dst == NULL)
		return (0);
	while (src[srcsize] != '\0')
		srcsize++;
	while (src[index] != '\0' && index < (int)dstsize - 1)
	{
		dst[index] = src[index];
		index++;
	}
	if (dstsize > 0)
		dst[index] = '\0';
	return (srcsize);
}
