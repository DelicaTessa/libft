/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/14 14:19:44 by tclement      #+#    #+#                 */
/*   Updated: 2020/04/24 10:02:23 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int arg)
{
	if (arg >= 'a' && arg <= 'z')
	{
		return (1);
	}
	else if (arg >= 'A' && arg <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
