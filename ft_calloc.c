/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kothman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 14:24:56 by kothman           #+#    #+#             */
/*   Updated: 2026/10/06 23:36:10 by kothman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int	*arr;

	arr = (int *)ft_calloc(5, sizeof(int));
	printf("%d %d\n", arr[0], arr[4]);
	free(arr);
	return (0);
}*/
