/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kothman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 16:18:03 by kothman           #+#    #+#             */
/*   Updated: 2026/10/13 16:19:25 by kothman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*current;

	if (!lst)
		return (NULL);
	current = lst;
	while (current->next != NULL)
	{
		current = current->next;
	}
	return (current);
}
/*#include <stdio.h>

int	main(void)
{
	t_list	*head;
	t_list	*last;

	head = ft_lstnew("First");
	head->next = ft_lstnew("Second");
	head->next->next = ft_lstnew("Third");
	last = ft_lstlast(head);
	if (last)
		printf("%s\n", (char *)last->content);
	free(head->next->next);
	free(head->next);
	free(head);
	return (0);
}*/
