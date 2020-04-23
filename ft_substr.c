/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/13 13:29:22 by tclement      #+#    #+#                 */
/*   Updated: 2020/04/21 10:17:30 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	index;

	sub = (char *)malloc(sizeof(char) * len + 1);
	index = 0;
	if (!(sub = (char *)malloc(sizeof(char) * len + 1)))
	{
		return (NULL);
	}
	while (index < len)
	{
		sub[index] = s[start];
		index++;
		start++;
	}
	sub[index] = '\0';
	return (sub);
}
