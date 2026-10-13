/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kothman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 16:26:19 by kothman           #+#    #+#             */
/*   Updated: 2026/10/13 16:28:04 by kothman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*tem;

	if (!lst || !del)
		return ;
	tem = *lst;
	current = tem->next;
	while (current != NULL)
	{
		del(tem->content);
		free(tem);
		tem = current;
		current = current->next;
	}
	if (tem != NULL)
	{
		del(tem->content);
		free(tem);
	}
	*lst = NULL;
}
/*#include <stdio.h>
#include <string.h>

void	del_content(void *content)
{
	printf("Deleted: %s\n", (char *)content);
	free(content);
}

int	main(void)
{
	t_list	*head;

	head = ft_lstnew(strdup("Node 1"));
	ft_lstadd_back(&head, ft_lstnew(strdup("Node 2")));
	ft_lstadd_back(&head, ft_lstnew(strdup("Node 3")));
	ft_lstclear(&head, del_content);
	if (head == NULL)
		printf("List is empty\n");
	return (0);
}*/
