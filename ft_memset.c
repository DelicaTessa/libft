/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/07 09:26:48 by tclement      #+#    #+#                 */
/*   Updated: 2020/05/20 12:13:38 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *s;

	s = (unsigned char *)b;
	while (len > 0)
	{
		s[len - 1] = (unsigned char)c;
		len--;
	}
	return (b);
}

/*
int main(void)
{
	char s[] = "draak";
	ft_memset(s, 's', 3);
	printf("%s", s);
	return (0);
}
*/