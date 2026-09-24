/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kothman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 16:19:34 by kothman           #+#    #+#             */
/*   Updated: 2026/09/24 17:43:43 by kothman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s,0,n);
}
#include <stdio.h>
int main ()
{
	char s[] = "khaled";
	size_t n = 3;
	char c = (unsigned char)ft_bzero(s,n);
	printf ("s",c);
}
