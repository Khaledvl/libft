/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kothman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 16:11:50 by kothman           #+#    #+#             */
/*   Updated: 2026/10/13 16:17:28 by kothman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	size_t	index;
	t_list	*current;

	index = 0;
	current = lst;
	while (current != NULL)
	{
		index++;
		current = current->next;
	}
	return (index);
}
/*#include <stdio.h>

int	main(void)
{
	t_list	*head;

	head = ft_lstnew("One");
	head->next = ft_lstnew("Two");
	head->next->next = ft_lstnew("Three");
	printf("%d\n", ft_lstsize(head));
	free(head->next->next);
	free(head->next);
	free(head);
	return (0);
}*/
