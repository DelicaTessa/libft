/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isprint.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/14 15:31:18 by tclement      #+#    #+#                 */
/*   Updated: 2020/04/14 15:38:13 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdio.h>
#include <ctype.h>

int	ft_isprint(int arg)
{
	if (arg >= 32 && arg <= 126)
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
	char arg1;
	char arg2;

	arg1 = 'a';
	arg2 = '\n';

	printf("%d\n", ft_isprint(arg1));
	printf("%d\n", ft_isprint(arg2));
	printf("%d\n", isprint(arg1));
	printf("%d\n", isprint(arg2));
	return (0);
}