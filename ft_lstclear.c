/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/06 14:09:15 by tclement      #+#    #+#                 */
/*   Updated: 2020/05/06 14:32:49 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *current;
	t_list *next;

	next = *lst;
	if (*lst == NULL || del == NULL)
		return ;
	while (next != NULL)
	{
		current = next;
		next = current->next;
		del(current->content);
		free(current);
	}
	*lst = NULL;
}
