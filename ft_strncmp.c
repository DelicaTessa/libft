/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/10 13:58:07 by tclement      #+#    #+#                 */
/*   Updated: 2020/04/14 13:53:16 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdio.h>


int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int index;

	index = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[index] == s2[index] && s1[index] != '\0' && index <= n)
	{
		index++;
	}
	return (s1[index] - s2[index]);
}

int main(void)
{
	char s1[] = "draak";
	char s2[] = "draak";
	char s3[] = "drak";
	char s4[] = "draaak";
	printf("%d", ft_strcmp(s1, s2, 4));
	printf("%d", ft_strcmp(s1, s3, 4));
	printf("%d", ft_strcmp(s1, s4, 4));
	return(0);
}

/*
** computes the difference between strings till n bytes
*/