/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kothman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 20:24:23 by kothman           #+#    #+#             */
/*   Updated: 2026/09/30 21:14:24 by kothman          ###   ########.fr       */
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
/*#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c);

int	main(void)
{
	char	*str;
	char	*res_std;
	char	*res_ft;

	str = "Hello World";
	// 1. البحث عن أول ظهور لحرف 'o'
	printf("=== Test 1: First occurrence of 'o' ===\n");
	res_std = strchr(str, 'o');
	res_ft = ft_strchr(str, 'o');
	printf("Standard : %s\n", res_std);
	printf("Your ft  : %s\n", res_ft);
	// 2. البحث عن الحرف الصفري '\0'
	printf("\n=== Test 2: Search for '\\0' ===\n");
	res_std = strchr(str, '\0');
	res_ft = ft_strchr(str, '\0');
	printf("Standard : \"%s\"\n", res_std);
	printf("Your ft  : \"%s\"\n", res_ft);
	// 3. البحث عن حرف غير موجود 'z'
	printf("\n=== Test 3: Search non-existing char 'z' ===\n");
	res_std = strchr(str, 'z');
	res_ft = ft_strchr(str, 'z');
	printf("Standard : %s\n", res_std ? res_std : "NULL");
	printf("Your ft  : %s\n", res_ft ? res_ft : "NULL");
	return (0);
}*/
