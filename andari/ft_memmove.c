/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kothman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 17:31:59 by kothman           #+#    #+#             */
/*   Updated: 2026/10/06 23:38:54 by kothman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*srcc;
	unsigned char		*dstt;

	srcc = (const unsigned char *)src;
	dstt = (unsigned char *)dest;
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
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "Hello World";

	ft_memmove(str + 2, str, 5);
	printf("%s\n", str);
	return (0);
}*/
