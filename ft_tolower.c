/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_tolower.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/14 15:40:48 by tclement      #+#    #+#                 */
/*   Updated: 2020/04/24 10:07:51 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
