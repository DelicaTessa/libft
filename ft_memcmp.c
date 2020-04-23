/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/18 13:40:01 by tclement      #+#    #+#                 */
/*   Updated: 2020/04/21 11:27:51 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int			ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			index;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char*)s1;
	str2 = (unsigned char*)s2;
	index = 0;
	if (n == 0)
	{
		return (0);
	}
	while (index < n)
	{
		if (str1[index] != str2[index])
		{
			return (str1[index] - str2[index]);
		}
		index++;
	}
	return (0);
}
