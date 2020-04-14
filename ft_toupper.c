/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_toupper.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/14 15:49:13 by tclement      #+#    #+#                 */
/*   Updated: 2020/04/14 15:53:08 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdio.h>
#include <ctype.h>

int	ft_toupper(int arg)
{
	if (arg >= 'a' && arg <= 'z')
	{
		return (arg - 32);
	}
	else
	{
		return (arg);
	}
}

int main(void)
{
	char arg1;
	char arg2;

	arg1 = 'n';
	arg2 = '+';

	printf("%c", ft_toupper(arg1));
	printf("%c", ft_toupper(arg2));
	printf("%c", toupper(arg1));
	printf("%c", toupper(arg2));
	return (0);
}