/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kothman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 12:05:31 by kothman           #+#    #+#             */
/*   Updated: 2026/10/06 22:25:21 by kothman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			index;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	index = 0;
	while (index < n)
	{
		ptr[index] = (unsigned char)c;
		index += 1;
	}
	return (s);
}
/*#include <stdio.h>

int	main(void)
{
	char	dest[] = "khaled";
	char	letter;
	size_t	len;
	char	*c;

	letter = 't';
	len = 2;
	c = (ft_memset(dest, letter, len));
	printf("%s", c);
}*/
