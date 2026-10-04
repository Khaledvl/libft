/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kothman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 17:20:37 by kothman           #+#    #+#             */
/*   Updated: 2026/10/03 18:12:26 by kothman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*str;

	if (!s1)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(const char *s1);

int	main(void)
{
	char	*orig_ptr;
	char	orig_arr[] = "Libft 42";
	char	*dup;

	printf("==================================================\n");
	printf("       ADVANCED STRDUP TEST SUITE (LIBFT)         \n");
	printf("==================================================\n\n");
	// Test 1: النص الفارغ
	orig_ptr = "";
	dup = ft_strdup(orig_ptr);
	printf("Test 1 [Empty String \"\"]: ");
	if (dup && strcmp(dup, orig_ptr) == 0 && dup != orig_ptr)
		printf("✅ PASS (Address: %p)\n", (void *)dup);
	else
		printf("❌ FAIL\n");
	free(dup);
	// Test 2: استقلالية الذاكرة (Deep Copy)
	dup = ft_strdup(orig_arr);
	printf("Test 2 [Memory Independence]: ");
	if (dup)
	{
		dup[0] = 'X';
		if (orig_arr[0] == 'L' && dup[0] == 'X')
			printf("✅ PASS (Original: \"%s\", Copy: \"%s\")\n", orig_arr, dup);
		else
			printf("❌ FAIL\n");
	}
	else
		printf("❌ FAIL\n");
	free(dup);
	// Test 3: نص طويل
	orig_ptr = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. "
				"Ut enim ad minim veniam, quis nostrud exercitation ullamco.";
	dup = ft_strdup(orig_ptr);
	printf("Test 3 [Long String Allocation]: ");
	if (dup && strcmp(dup, orig_ptr) == 0)
		printf("✅ PASS (Copied %zu bytes)\n", strlen(dup));
	else
		printf("❌ FAIL\n");
	free(dup);
	// Test 4: رموز التحكم والمسافات
	orig_ptr = "\t\n\r  Hello 42 \v\f";
	dup = ft_strdup(orig_ptr);
	printf("Test 4 [Control Characters]: ");
	if (dup && strcmp(dup, orig_ptr) == 0)
		printf("✅ PASS\n");
	else
		printf("❌ FAIL\n");
	free(dup);
	return (0);
}*/
