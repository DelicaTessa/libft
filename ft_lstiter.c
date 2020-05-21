/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstiter.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/06 14:33:47 by tclement      #+#    #+#                 */
/*   Updated: 2020/05/21 10:08:54 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*
void	f(void *content)
{
	char *s;
	int len;

	s = (char *) content;
	len = 0;
	while (s[len] != '\0')
	{
		s[len] = 'd';
		len++;
	}
}
*/

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (f == NULL)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*
int main(void)
{
	t_list *elem1;
	t_list *elem2;

	char *s = "aaaa";
	char *t = "bbb";

	elem1 = ft_lstnew(ft_strdup(s));
	elem2 = ft_lstnew(ft_strdup(t));
	elem1->next = elem2;
	elem2->next = NULL;
	ft_lstiter(elem2, &f);
	printf("%s", elem2->content);
	return (0);
}
*/