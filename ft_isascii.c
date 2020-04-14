/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isascii.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/14 15:11:10 by tclement      #+#    #+#                 */
/*   Updated: 2020/04/14 15:29:45 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <libft.h>
#include <stdio.h>

int	ft_isascii(int arg)
{
	if (arg >= 0 && arg <= 127)
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
	int arg1;
	int arg2;

	arg1 = 130;
	arg2 = 34;

	printf("%d", ft_isascii(arg1));
	printf("%d", ft_isascii(arg2));
	printf("%d", isascii(arg1));
	printf("%d", isascii(arg2));
	return (0);
}