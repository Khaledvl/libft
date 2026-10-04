/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kothman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 21:15:35 by kothman           #+#    #+#             */
/*   Updated: 2026/09/30 21:38:17 by kothman          ###   ########.fr       */
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
/*#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c);

int	main(void)
{
	char	*str;
	char	*res_std;
	char	*res_ft;

	str = "Hello World";
	// 1. البحث عن آخر ظهور لحرف 'o'
	printf("=== Test 1: Last occurrence of 'o' ===\n");
	res_std = strrchr(str, 'o');
	res_ft = ft_strrchr(str, 'o');
	printf("Standard : %s\n", res_std ? res_std : "(null)");
	printf("Your ft  : %s\n", res_ft ? res_ft : "(null)");
	// 2. البحث عن الحرف الصفري '\0'
	printf("\n=== Test 2: Search for '\\0' ===\n");
	res_std = strrchr(str, '\0');
	res_ft = ft_strrchr(str, '\0');
	printf("Standard : \"%s\"\n", res_std ? res_std : "(null)");
	printf("Your ft  : \"%s\"\n", res_ft ? res_ft : "(null)");
	// 3. البحث عن حرف غير موجود 'z'
	printf("\n=== Test 3: Search non-existing char 'z' ===\n");
	res_std = strrchr(str, 'z');
	res_ft = ft_strrchr(str, 'z');
	printf("Standard : %s\n", res_std ? res_std : "(null)");
	printf("Your ft  : %s\n", res_ft ? res_ft : "(null)");
	return (0);
}*/
