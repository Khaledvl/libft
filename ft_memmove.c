/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kothman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 17:31:59 by kothman           #+#    #+#             */
/*   Updated: 2026/09/28 18:11:38 by kothman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*srcc;
	char	*dstt;

	srcc = (char *)src;
	dstt = (char *)dest;
	if (dest == src)
		return (dest);
	i = -1;
	if (src > dest)
	{
		while (n > ++i)
			dstt[i] = srcc[i];
	}
	else
	{
		while (n)
		{
			dstt[n - 1] = srcc[n - 1];
			n--;
		}
	}
	return (dest);
}
/*#include <stdio.h>
#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n);

int	main(void)
{
	printf("=== TEST 1: Basic String Copy ===\n");
	char str_src[] = "42 Amman";
	char str_dst[20];

	ft_memmove(str_dst, str_src, 9);
	printf("Result: %s\n\n", str_dst);

	printf("=== TEST 2: Overlap Copy (Right to Left) ===\n");
	char str1[20] = "123456789";
	ft_memmove(str1 + 2, str1, 5);
	printf("Result: %s\n\n", str1);

	printf("=== TEST 3: Overlap Copy (Left to Right) ===\n");
	char str2[20] = "123456789";
	ft_memmove(str2, str2 + 2, 5);
	printf("Result: %s\n", str2);

	return (0);
}*/
