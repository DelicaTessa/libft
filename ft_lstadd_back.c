/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstadd_back.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/06 13:05:31 by tclement      #+#    #+#                 */
/*   Updated: 2020/05/20 12:51:11 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *last;

	if (new == NULL)
		return ;
	new->next = NULL;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	else
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
}

/*
int main(void)
{
	t_list *head;
	t_list *elem1;
	t_list *elem2;

	head = NULL;
	elem1 = ft_lstnew("draak");
	elem2 = ft_lstnew("donut");
	ft_lstadd_back(&head, elem1);
	printf("%s", head->content);
	return (0);
}
*/