/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/06 14:57:24 by tclement      #+#    #+#                 */
/*   Updated: 2020/05/21 16:00:14 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*
void *f(void *content)
{
	char *s;
	int i;

	i = 0;
	s = (char *)content;
	while (s[i] != '\0')
	{
		s[i]+=1;
		i++;
	}
	return ((void *)s);
}

void	del(void *content)
{
	free (content);
}
*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new;
	t_list *start;

	start = NULL;
	if (f == NULL)
		return (NULL);
	while (lst != NULL)
	{
		new = ft_lstnew((*f)(lst->content));
		if (new == NULL)
		{
			ft_lstclear(&start, del);
			return (NULL);
		}
		ft_lstadd_back(&start, new);
		lst = lst->next;
	}
	return (start);
}

/*
int main(void)
{
	t_list *elem1;
	t_list *elem2;

	char *s = "draak";
	char *t = "bloem";

	elem1 = ft_lstnew(ft_strdup(s));
	elem2 = ft_lstnew(ft_strdup(t));

	elem1->next =  elem2;
	elem2->next = NULL;
	ft_lstmap(elem1, &f, &del);
	printf("%s", elem1->content);
	return (0);
}
*/