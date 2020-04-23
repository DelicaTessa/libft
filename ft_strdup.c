/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/10 14:17:53 by tclement      #+#    #+#                 */
/*   Updated: 2020/04/21 11:22:47 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>

char	*ft_strdup(const char *src)
{
	int		index;
	char	*dest;

	index = 0;
	dest = (char*)malloc(sizeof(char) * ft_strlen(src) + 1);
	if (dest == NULL)
	{
		return (NULL);
	}
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
