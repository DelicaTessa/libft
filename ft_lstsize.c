/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstsize.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/06 12:45:09 by tclement      #+#    #+#                 */
/*   Updated: 2020/05/06 13:42:34 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		counter;
	t_list	*index;

	counter = 0;
	index = lst;
	if (lst == NULL)
		return (0);
	while (index != NULL)
	{
		counter++;
		index = index->next;
	}
	return (counter);
}
