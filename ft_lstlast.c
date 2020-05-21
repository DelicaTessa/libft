/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstlast.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/06 12:54:31 by tclement      #+#    #+#                 */
/*   Updated: 2020/05/21 10:45:32 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (lst);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

/*
int main(void)
{
	t_list *elem1;
	t_list *elem2;
	t_list *elem3;
	t_list *last;

	char *s = "dribbel";
	char *t = "donut";
	char *f = "draak";

	elem1 = ft_lstnew(ft_strdup(s));
	elem2 = ft_lstnew(ft_strdup(t));
	elem3 = ft_lstnew(ft_strdup(f));

	elem1->next = elem2;
	elem2->next = elem3;
	elem3->next = NULL;

	last = ft_lstlast(elem1);
	printf("%s", last->content);
	return (0);
}
*/
