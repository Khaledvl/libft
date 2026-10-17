/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kothman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 14:24:56 by kothman           #+#    #+#             */
/*   Updated: 2026/10/17 14:06:01 by kothman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (size != 0 && count > SIZE_MAX / size)
		return (NULL);
	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}
/*
#include <stdio.h>

int	main(void)
{
	int	*arr;

	arr = (int *)ft_calloc(5, sizeof(int));
	if (!arr)
		return (1);
	printf("arr[0] = %d\n", arr[0]);
	printf("arr[4] = %d\n", arr[4]);
	free(arr);
	return (0);
}
*/
