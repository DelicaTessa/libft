/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/14 21:08:12 by tclement      #+#    #+#                 */
/*   Updated: 2020/04/15 10:51:04 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdio.h>

char 		*ft_strchr(const char *s, int c)
{
	int	index;

	index = 0;
	while (s[index] != '\0')
	{
		if (s[index] == c)
			return ((char *)s + index);
		index++;
	}
	return (NULL);
}

int main(void)
{
	
	int c;

	char str[] = "ik heb een draak";
	 c = 'z';

	printf("%s", ft_strchr(str, c));
	return (0);
}