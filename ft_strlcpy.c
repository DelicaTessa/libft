/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/10 14:39:07 by tclement      #+#    #+#                 */
/*   Updated: 2020/04/15 10:19:17 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t len_src;	printf("%c\n", dst[6]);

	len_src = 0;
	while (src[len_src] != '\0' && len_src < size - 1)
	{
		dst[len_src] = src[len_src];
		len_src++;
	}
	if (size == 0)
	{
		return (0);
	}
	else
	{
		dst[len_src] = '\0';
	}
	printf("%c\n", dst[6]);
	return (len_src);
}

int main(void)
{
	char dest[] = "marble";
	char src[] = "dragon";
	printf("%ld", ft_strlcpy(dest, src, sizeof(dest)));

	return (0);
}

/*
** copies dest to src, calculates the len from src
** size -1 to leave room for '\0'
*/