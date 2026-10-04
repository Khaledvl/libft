/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kothman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 11:01:07 by kothman           #+#    #+#             */
/*   Updated: 2026/09/29 14:41:06 by kothman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	i;

	i = 0;
	if (size)
	{
		while ((i < size) && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
/*(#include <stdio.h>

int	main(void)
{
	char	s[3];
	char	a[7] = "khaled";

	printf("%zu\n", ft_strlcpy(s, a, 3));
	printf("%s\n", s);
}*/
