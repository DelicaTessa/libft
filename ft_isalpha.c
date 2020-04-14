/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/14 14:19:44 by tclement      #+#    #+#                 */
/*   Updated: 2020/04/14 15:10:42 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <ctype.h>
#include <stdio.h>

int	ft_isalpha(int arg)
{
	if (arg >= 'a' && arg <= 'z' || arg >= 'A' && arg <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	main(void)
{
	int n;
	int m;
	int z;

	n = 'a';
	m = '+';
	z = 'Z';

	printf("%d\n", ft_isalpha(n));
	printf("%d\n", ft_isalpha(m));
	printf("%d\n", ft_isalpha(z));
	printf("%d\n", isalpha(n));
	printf("%d\n", isalpha(m));
	printf("%d\n", isalpha(z));
	return (0);
}
