/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstadd_front.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/06 12:22:41 by tclement      #+#    #+#                 */
/*   Updated: 2020/05/21 09:57:27 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new == NULL)
		return ;
	else if (*lst == NULL)
		*lst = new;
	else
	{
		new->next = (*lst);
		(*lst) = new;
	}
}

/*
int main(void)
{
	t_list *head;
	t_list *elem1;
	t_list *elem2;
	char *s = "draak";
	char *t = "merp"
	head = NULL;
	elem1 = ft_lstnew(ft_strdup(s));
	elem2 = ft_lstnew(ft_strdup(t));
	ft_lstadd_front(&head, elem1);
	printf("%s", head->content);
	return (0);
}
*/