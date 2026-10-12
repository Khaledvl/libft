/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kothman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 20:24:23 by kothman           #+#    #+#             */
/*   Updated: 2026/10/06 23:39:23 by kothman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	char	let;

	str = (char *)s;
	let = (char)c;
	while (*str)
	{
		if (*str == let)
			return (str);
		str++;
	}
	if (*str == let)
		return (str);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_strchr("Hello", 'e'));
	return (0);
}*/
