/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kothman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 21:15:35 by kothman           #+#    #+#             */
/*   Updated: 2026/10/17 17:53:26 by kothman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;
	char	let;

	str = (char *)s;
	let = (char)c;
	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == let)
			return (str + i);
		i--;
	}
	return (0);
}
