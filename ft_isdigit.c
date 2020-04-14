/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isdigit.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/14 14:41:26 by tclement      #+#    #+#                 */
/*   Updated: 2020/04/14 14:57:43 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int arg)
{
	if (arg >= '0' && arg <= '9')
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
	arg2 = '3';

	printf("%d\n", ft_isdigit(arg1));
	printf("%d\n", ft_isdigit(arg2));
	printf("%d\n", isdigit(arg1));
	printf("%d\n", isdigit(arg2));
	return (0);
}