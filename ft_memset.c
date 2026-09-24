/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kothman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 12:05:31 by kothman           #+#    #+#             */
/*   Updated: 2026/09/24 14:26:53 by kothman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*dest;

	dest = (unsigned char *)s;
	while (n != 0)
	{
		*dest = (unsigned char)c;
		dest ++;
		n--;
	}
	return (s);
}
/*#include <stdio.h>
int main ()
{
	char dest[] = "khaled";
	char letter = 't';
	size_t len = 2;
	char *c;
	c = (ft_memset(dest,letter,len));
	printf("%s",c);
}*/
