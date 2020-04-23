/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isascii.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/14 15:11:10 by tclement      #+#    #+#                 */
/*   Updated: 2020/04/21 10:00:34 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

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
