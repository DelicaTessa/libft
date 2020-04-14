/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/14 14:03:52 by tclement      #+#    #+#                 */
/*   Updated: 2020/04/14 14:15:37 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <libft.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int value;
	int sign;

	value = 0;
	sign = 1;
	if (*str == 43 || *str == 45)
	{
		if (*str == 45)
		{
			sign = -1;
		}
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

int main()
{
  char a[] = "abc120a";
  int b;
  int c;

  b = ft_atoi(a);
  c = atoi(a);
  printf("%d", b);
  printf("%d", c);

  return (0);
}