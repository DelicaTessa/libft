/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/10 12:50:30 by tclement      #+#    #+#                 */
/*   Updated: 2020/04/14 13:52:00 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdio.h>

long int	ft_strlen(const char *str)
{
	long int len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

int main(void)
{
	char str1[] = "draak";
	printf("%ld", ft_strlen(str1));
	return (0);
}
