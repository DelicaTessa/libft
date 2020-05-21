/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/15 10:19:47 by tclement      #+#    #+#                 */
/*   Updated: 2020/05/20 12:31:04 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	index;

	len = 0;
	index = 0;
	if (dst == NULL && size == 0)
		return (ft_strlen(src));
	while (dst[len] != '\0' && len < size)
	{
		len++;
	}
	while ((src[index] != '\0') && ((len + index + 1) < size))
	{
		dst[len + index] = src[index];
		index++;
	}
	if (len < size)
	{
		dst[len + index] = '\0';
	}
	return (len + ft_strlen(src));
}

/*
int main(void)
{
	char d[] = "drakerigedraak";
	char s[] = "dribbelendonut";
	printf("%lu", ft_strlcat(d, s, 5));
	return (0);
}
*/