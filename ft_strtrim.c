/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kothman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 23:07:19 by kothman           #+#    #+#             */
/*   Updated: 2026/10/13 12:55:45 by kothman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	index;
	char	*ptr;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	ptr = malloc(end - start + 1);
	if (!ptr)
		return (NULL);
	index = 0;
	while (index + start < end)
	{
		ptr[index] = s1[start + index];
		index++;
	}
	ptr[index] = '\0';
	return (ptr);
}
/*#include <stdio.h>
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set);

int	main(void)
{
	char	*res;

	res = ft_strtrim("xxxHello 42xxx", "x");
	printf("Test 1: %s\n", res);
	free(res);
	res = ft_strtrim("xHello x Worldx", "x");
	printf("Test 2: %s\n", res);
	free(res);
	res = ft_strtrim("aaaaa", "a");
	printf("Test 3: '%s' (should be empty)\n", res);
	free(res);
	return (0);
}*/
