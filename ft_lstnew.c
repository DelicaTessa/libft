/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstnew.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/06 11:53:40 by tclement      #+#    #+#                 */
/*   Updated: 2020/05/21 09:56:46 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list *new;

	new = ft_calloc(1, sizeof(t_list));
	if (new == NULL)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

/*
int main(void)
{
	t_list *new;
	char *s = "draak";
	new = ft_lstnew(ft_strdup(s));
	printf("%s", new->content);
	return (0);
}
*/