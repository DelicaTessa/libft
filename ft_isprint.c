/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isprint.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/14 15:31:18 by tclement      #+#    #+#                 */
/*   Updated: 2020/04/21 10:01:59 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

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
