/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/13 13:35:24 by tclement      #+#    #+#                 */
/*   Updated: 2020/05/03 13:25:07 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*splitnbrs(char *str, int n, int index)
{
	if (n < 0)
	{
		str[0] = '-';
		n = n * -1;
	}
	if (n == -0)
		n = 0;
	if (n >= 10)
		splitnbrs(str, n / 10, index - 1);
	str[index] = n % 10 + '0';
	return (str);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		index;
	int		count;

	index = 0;
	count = n;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n <= 0)
		index++;
	while (count != 0)
	{
		count = count / 10;
		index++;
	}
	str = malloc(index + 1);
	if (str == NULL)
		return (NULL);
	splitnbrs(str, n, index - 1);
	str[index] = '\0';
	return (str);
}
