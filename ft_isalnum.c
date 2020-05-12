/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalnum.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/14 14:59:37 by tclement      #+#    #+#                 */
/*   Updated: 2020/05/11 16:48:03 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int arg)
{
	if (arg >= '0' && arg <= '9')
	{
		return (1);
	}
	else if (arg >= 'a' && arg <= 'z')
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
