/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/14 19:14:41 by tclement      #+#    #+#                 */
/*   Updated: 2020/04/21 10:16:07 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strnstr(const char	*haystack, const char *needle, size_t len)
{
	size_t	index;
	size_t	counter;

	index = 0;
	counter = 0;
	while (index < len && haystack[index] != '\0')
	{
		while (index + counter < len && haystack[index + counter] == needle[counter] 
		&& needle[counter] != '\0')
			counter++;
		if (needle[counter] == '\0')
			return ((char *)haystack + index);
		index++;
	}
	return (NULL);
}
