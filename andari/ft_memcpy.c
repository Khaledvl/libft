/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kothman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 16:56:32 by kothman           #+#    #+#             */
/*   Updated: 2026/10/06 23:38:04 by kothman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dst;
	unsigned char	*srce;

	dst = (unsigned char *)dest;
	srce = (unsigned char *)src;
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
/*
#include <stdio.h>

int	main(void)
{
	char	dest[20];

	ft_memcpy(dest, "Hello", 6);
	printf("%s\n", dest);
	return (0);
}*/
