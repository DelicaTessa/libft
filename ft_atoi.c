/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/14 14:03:52 by tclement      #+#    #+#                 */
/*   Updated: 2020/05/03 13:40:01 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long long value;
	long long sign;

	value = 0;
	sign = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n' ||
			*str == '\r' || *str == '\v' || *str == '\f' ||
			*str == '\b' || *str == '\a')
	{
		str++;
	}
	if (*str == 43 || *str == 45)
	{
		if (*str == 45)
			sign = -1;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		value = value * 10;
		value = value + (*str - '0');
		str++;
	}
	return (value * sign);
}
