/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstdelone.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/06 13:48:25 by tclement      #+#    #+#                 */
/*   Updated: 2020/05/21 10:09:08 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*
void del(void *content)
{
	free(content);
}
*/

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (del == NULL)
		return ;
	del(lst->content);
	free(lst);
}

/*
int main(void)
{
	t_list *elem1;
	t_list *elem2;
	t_list *elem3;

	char str [] = "dolor";
	char str2 [] = "sit";
	char str3[] = "amet";

	elem1 = ft_lstnew(ft_strdup(str));
	elem2 = ft_lstnew(ft_strdup(str2));
	elem3 = ft_lstnew(ft_strdup(str3));

	elem1->next = elem2;
	elem2->next = elem3;

	ft_lstdelone(elem2, *del);
	printf("%s", elem2->content);
	return (0);
}
*/