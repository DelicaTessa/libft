/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/18 13:40:01 by tclement      #+#    #+#                 */
/*   Updated: 2020/05/20 12:18:59 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int			ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				index;
	unsigned const char	*str1;
	unsigned const char	*str2;

	str1 = (unsigned const char*)s1;
	str2 = (unsigned const char*)s2;
	index = 0;
	while (index < n)
	{
		if (str1[index] != str2[index])
			return (str1[index] - str2[index]);
		index++;
	}
	return (0);
}

/*
int main(void)
{
	char s[] = "draak";
	char d[] = "draak";
	printf("%d", ft_memcmp(s, d, 3));
	return (0);
}
*/