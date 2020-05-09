/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/14 14:03:52 by tclement      #+#    #+#                 */
/*   Updated: 2020/05/08 11:56:56 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_skip(const char *str, int i)
{
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == '\r' || str[i] == '\v' || str[i] == '\f' ||
			str[i] == '\b' || str[i] == '\a')
	{
		i++;
	}
	return (i);
}

int			ft_atoi(const char *str)
{
	unsigned long	value;
	int				i;
	int				sign;

	i = ft_skip(str, 0);
	value = 0;
	sign = 1;
	if (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			sign = -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		value = (value * 10) + (str[i] - '0');
		i++;
		if (value > 9223372036854775807 && sign == 1)
			return (-1);
		if (value > 9223372036854775807 && sign == -1)
			return (0);
	}
	return (value * sign);
}
