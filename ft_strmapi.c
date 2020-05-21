/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/07 09:26:35 by tclement      #+#    #+#                 */
/*   Updated: 2020/05/20 12:43:01 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*
char f(unsigned int i, char c)
{
	i += 1;
	return (c + 1);
}
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	index;

	index = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	str = ft_strdup(s);
	if (str == NULL)
		return (NULL);
	while (s[index] != '\0')
	{
		str[index] = (*f)(index, s[index]);
		index++;
	}
	return (str);
}
 /*
int main(void)
{
	char s[] = "abcdefgh";
	printf("%s", ft_strmapi(s, &f));
	return (0);
}
*/
