/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/15 08:28:43 by tclement      #+#    #+#                 */
/*   Updated: 2020/04/21 10:16:35 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strrchr(const char *s, int c)
{
	int len;

	len = ft_strlen(s);
	while (s[len] >= 0)
	{
		if (s[len] == c)
		{
			return ((char *)s + len);
		}
		len--;
	}
	return (NULL);
}
