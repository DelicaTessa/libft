/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstsize.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/06 12:45:09 by tclement      #+#    #+#                 */
/*   Updated: 2020/05/21 10:29:12 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_lstsize(t_list *lst)
{
	int		counter;
	t_list	*index;

	counter = 0;
	index = lst;
	while (index != NULL)
	{
		counter++;
		index = index->next;
	}
	return (counter);
}

/*
int main(void)
{
	t_list *elem1;
	t_list *elem2;
	t_list *elem3;

	char *s = "dribbel";
	char *t = "donut";
	char *f = "draak";

	elem1 = ft_lstnew(ft_strdup(s));
	elem2 = ft_lstnew(ft_strdup(t));
	elem3 = ft_lstnew(ft_strdup(f));

	elem1->next = elem2;
	elem2->next = elem3;
	elem3->next = NULL;

	printf("%d", ft_lstsize(elem1));
	return(0);
}
*/