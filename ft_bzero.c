/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/15 10:29:24 by tclement      #+#    #+#                 */
/*   Updated: 2020/04/16 10:00:21 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdio.h>

void		ft_bzero(void *s, size_t n)
{
	int c;

	c = 0;
	ft_memset(s, 0, n);
}

int main(void)
{
	char a[] = "aaaaaaaa";
	printf("%s", a + 6);
	return (0);
}