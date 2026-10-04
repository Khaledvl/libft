/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kothman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 16:28:04 by kothman           #+#    #+#             */
/*   Updated: 2026/10/04 10:24:22 by kothman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	ldst;
	size_t	lsrc;
	size_t	i;
	size_t	tot;
	size_t	ava;

	ldst = ft_strlen(dst);
	lsrc = ft_strlen(src);
	i = 0;
	ava = 0;
	if (ldst < size)
	{
		tot = ldst + lsrc;
		ava = size - ldst - 1;
	}
	else
		tot = size + lsrc;
	while (i < ava && src)
	{
		dst[ldst++] = src[i++];
	}
	if (ava > 0)
		dst[ldst] = '\0';
	return (tot);
}
/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dst1[6] = "Hello";
	char	dst2[6] = "Hello";
	char	*src;
	size_t	size;
	size_t	ret1;
	size_t	ret2;

	src = " World!";
	size = 5;
	ret1 = strlcat(dst1, src, size);
	ret2 = ft_strlcat(dst2, src, size);
	printf("Standard strlcat -> Ret: %zu | dst: \"%s\"\n", ret1, dst1);
	printf("Your ft_strlcat  -> Ret: %zu | dst: \"%s\"\n", ret2, dst2);
	if (ret1 == ret2 && strcmp(dst1, dst2) == 0)
		printf("\nResult:  PASS\n");
	else
		printf("\nResult:  FAIL\n");
	return (0);
}*/
