/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/13 13:31:44 by tclement      #+#    #+#                 */
/*   Updated: 2020/04/21 10:08:23 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		index;
	int		counter;

	new = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	index = 0;
	counter = 0;
	if (!(new = malloc(ft_strlen(s1) + ft_strlen(s2) + 1)))
	{
		return (NULL);
	}
	while (s1[index] != '\0')
	{
		new[index] = s1[index];
		index++;
	}
	while (s2[counter] != '\0')
	{
		new[index + counter] = s2[counter];
		counter++;
	}
	new[index + counter] = '\0';
	return (new);
}
