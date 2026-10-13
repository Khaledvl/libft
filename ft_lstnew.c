/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kothman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 14:32:24 by kothman           #+#    #+#             */
/*   Updated: 2026/10/13 14:52:50 by kothman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
/*
#include <stdio.h>

t_list	*ft_lstnew(void *content);

int	main(void)
{
	t_list	*node;

	node = ft_lstnew("Hello 42");
	if (!node)
		return (1);
	printf("%s\n", (char *)node->content);
	free(node);
	return (0);
}*/
