/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/15 10:26:11 by tclement      #+#    #+#                 */
/*   Updated: 2020/04/16 09:46:21 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdio.h>

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	size_t			index;
	unsigned char	*dest;
	unsigned char	*src;

	index = 0;
	dest = (unsigned char *)s1;
	src = (unsigned char *)s2;
	printf("%s", dest);
	while (index < n)
	{
		dest = src;
		index++;
	}
	printf("%s\n", dest);
	return (s1);
}

int main(void)
{
	char str1[] = "draak";
	char str2[] = "drogg";
	ft_memcpy(str1, str2, 4);
	return (0);
}