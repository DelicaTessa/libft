/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalnum.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/14 14:59:37 by tclement      #+#    #+#                 */
/*   Updated: 2020/04/14 15:10:24 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <libft.h>
#include <stdio.h>

int	ft_isalnum(int arg)
{
	if (arg >= '0' && arg <= '9')
	{
		return (1);
	}
	else if (arg >= 'a' && arg <= 'z' || arg >= 'A' && arg <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int main(void)
{
	int n;
	int m;
	int z;

	n = 'a';
	m = '+';
	z = 'Z';

	char arg1;
	char arg2;

	arg1 = 'a';
	arg2 = '3';

	printf("%d\n", ft_isalnum(arg1));
	printf("%d\n", ft_isalnum(arg2));
	printf("%d\n", isalnum(arg1));
	printf("%d\n", isalnum(arg2));

	printf("%d\n", ft_isalnum(n));
	printf("%d\n", ft_isalnum(m));
	printf("%d\n", ft_isalnum(z));
	printf("%d\n", isalnum(n));
	printf("%d\n", isalnum(m));
	printf("%d\n", isalnum(z));
	return (0);
}