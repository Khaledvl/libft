/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kothman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 16:22:49 by kothman           #+#    #+#             */
/*   Updated: 2026/10/13 16:26:02 by kothman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
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
	t_list	*node;

	node = ft_lstnew(strdup("Node 1"));
	ft_lstdelone(node, del_content);
	return (0);
}*/
