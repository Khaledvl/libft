/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kothman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 16:56:32 by kothman           #+#    #+#             */
/*   Updated: 2026/09/28 18:07:02 by kothman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*dst;
	char	*srce;

	dst = (char *)dest;
	srce = (char *)src;
	if (src == dest)
		return (dest);
	i = 0;
	while (i < n)
	{
		dst[i] = srce[i];
		i++;
	}
	return (dest);
}
/*#include <stdio.h>
#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n);

int	main(void)
{
	// تجربة 1: نسخ نص كامل
	char str_src[] = "42 Amman";
	char str_dst[20];

	ft_memcpy(str_dst, str_src, 9);
	printf("Test 1 (String): %s\n", str_dst);

	// تجربة 2: نسخ أول 3 أحرف بس
	char name_dst[10] = {0};

	ft_memcpy(name_dst, "KHALED", 3);
	printf("Test 2 (Partial): %s\n", name_dst);

	// تجربة 3: إذا dest و src نفس المكان
	char same_place[] = "Same";

	ft_memcpy(same_place, same_place, 4);
	printf("Test 3 (Same ptr): %s\n", same_place);

	return (0);
}*/
