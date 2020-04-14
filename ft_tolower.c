/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_tolower.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/14 15:40:48 by tclement      #+#    #+#                 */
/*   Updated: 2020/04/14 15:52:00 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdio.h>
#include <ctype.h>

int	ft_tolower(int arg)
{
	if (arg >= 'A' && arg <= 'Z')
	{
		return (arg + 32);
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

	arg1 = 'M';
	arg2 = '+';

	printf("%c", ft_tolower(arg1));
	printf("%c", ft_tolower(arg2));
	printf("%c", tolower(arg1));
	printf("%c", tolower(arg2));
	return (0);
}