/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/10 14:17:53 by tclement      #+#    #+#                 */
/*   Updated: 2020/04/15 10:21:20 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdio.h>
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

int main(void)
{
	char src[]= "merp";
	printf("%s", ft_strdup(src));
	return (0);
}

/*
** like strcpy but with one parameter and enough space to copy the whole src
*/