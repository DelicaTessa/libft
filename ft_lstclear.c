/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/06 14:09:15 by tclement      #+#    #+#                 */
/*   Updated: 2020/05/21 10:09:19 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*
void	ft_del(void *content)
{
		free(content);
}
*/

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *current;
	t_list *next;

	next = *lst;
	if (del == NULL)
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
 
/*
int main(void)
{
		t_list		*elem;
		t_list		*elem2;
		t_list		*elem3;
		t_list		*elem4;
		char		str [] = "lorem";
		char		str2 [] = "ipsum";
		char		str3 [] = "dolor";
		char		str4 [] = "sit";

		elem = ft_lstnew(ft_strdup(str));
		elem2 = ft_lstnew(ft_strdup(str2));
		elem3 = ft_lstnew(ft_strdup(str3));
		elem4 = ft_lstnew(ft_strdup(str4));

		elem->next = elem2;
		elem2->next = elem3;
		elem3->next = elem4;
		ft_lstclear(&elem2, &ft_del);
		printf("%s", elem2->content);
		return (0);
}
*/
