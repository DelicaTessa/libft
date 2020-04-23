/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/10 14:39:07 by tclement      #+#    #+#                 */
/*   Updated: 2020/04/21 11:21:57 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t len_src;

	len_src = 0;
	while (src[len_src] != '\0' && len_src < size - 1)
	{
		dst[len_src] = src[len_src];
		len_src++;
	}
	if (size == 0)
	{
		return (0);
	}
	else
	{
		dst[len_src] = '\0';
	}
	return (len_src);
}
