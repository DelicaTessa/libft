/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_toupper.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/14 15:49:13 by tclement      #+#    #+#                 */
/*   Updated: 2020/05/11 16:02:05 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int arg)
{
	if (arg >= 'a' && arg <= 'z')
	{
		return (arg - 32);
	}
	else
	{
		return (arg);
	}
}
