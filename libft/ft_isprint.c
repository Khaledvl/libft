/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kothman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 18:36:40 by kothman           #+#    #+#             */
/*   Updated: 2026/10/17 14:13:15 by kothman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("Is 'A' printable? %d\n", ft_isprint('A'));
	printf("Is '\\n' printable? %d\n", ft_isprint('\n'));
	return (0);
}
*/
