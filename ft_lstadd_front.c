/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kothman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 16:06:49 by kothman           #+#    #+#             */
/*   Updated: 2026/10/13 16:22:30 by kothman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*#include <stdio.h>

int	main(void)
{
	t_list	*head;

	head = ft_lstnew("World");
	ft_lstadd_front(&head, ft_lstnew("Hello"));
	printf("%s %s\n", (char *)head->content, (char *)head->next->content);
	free(head->next);
	free(head);
	return (0);
}*/
