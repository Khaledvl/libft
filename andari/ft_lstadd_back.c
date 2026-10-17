/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kothman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 16:19:52 by kothman           #+#    #+#             */
/*   Updated: 2026/10/13 16:21:09 by kothman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
	}
	else
	{
		current = ft_lstlast(*lst);
		current->next = new;
	}
}
/*#include <stdio.h>

int	main(void)
{
	t_list	*head;

	head = ft_lstnew("First");
	ft_lstadd_back(&head, ft_lstnew("Second"));
	printf("%s -> %s\n", (char *)head->content, (char *)head->next->content);
	free(head->next);
	free(head);
	return (0);
}*/
