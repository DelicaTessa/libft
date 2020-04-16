/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/07 09:26:48 by tclement      #+#    #+#                 */
/*   Updated: 2020/04/16 10:13:13 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <libft.h>
#include <stdio.h>

void 		*ft_memset(void *b, int c, size_t len)
{
	unsigned char *s;

	s = (unsigned char *)b;
	while (len > 0)
	{
		s[len] = c;
		len--;
	}
	return (s);
}

int     main(void)
{
    void    *b[100];
    if (memset(b, 48, 5) == ft_memset(b, 48, 5) && (memset(b, 128, 5) == ft_memset(b, 128, 5))
		    && (memset(b, 48, 99) == ft_memset(b, 48, 99))
		    && (memset(b, 48, 5) == ft_memset(b, 48, 5)))
    {
	    printf("ft_memset ok\n");
    }
    else
    {
	    printf("ft_memset not ok\n");
    }
	return (0);
}

