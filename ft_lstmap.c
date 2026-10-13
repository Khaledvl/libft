/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kothman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 16:31:30 by kothman           #+#    #+#             */
/*   Updated: 2026/10/13 16:33:49 by kothman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*clear_nods(t_list **lst, void (*del)(void *))
{
	ft_lstclear(lst, del);
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*current;
	t_list	*new_node;
	void	*new_content;

	if (!lst || !f || !del)
		return (NULL);
	head = NULL;
	current = lst;
	while (current != NULL)
	{
		new_content = f(current->content);
		if (new_content == NULL)
			return (clear_nods(&head, del));
		new_node = ft_lstnew(new_content);
		if (new_node == NULL)
		{
			del(new_content);
			return (clear_nods(&head, del));
		}
		ft_lstadd_back(&head, new_node);
		current = current->next;
	}
	return (head);
}
/*
#include <stdio.h>
#include <string.h>

void	*transform(void *content)
{
	(void)content;
	return (strdup("Mapped"));
}

void	del_content(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*head;
	t_list	*new_list;

	head = ft_lstnew("Node 1");
	head->next = ft_lstnew("Node 2");
	new_list = ft_lstmap(head, transform, del_content);
	if (new_list)
	{
		printf("%s\n", (char *)new_list->content);
		printf("%s\n", (char *)new_list->next->content);
	}
	ft_lstclear(&new_list, del_content);
	free(head->next);
	free(head);
	return (0);
}*/
