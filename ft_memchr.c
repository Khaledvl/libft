/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kothman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 17:17:17 by kothman           #+#    #+#             */
/*   Updated: 2026/10/03 11:55:42 by kothman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return (str + i);
		i++;
	}
	return (0);
}
/*#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n);

void	run_test(int test_id, const void *s, int c, size_t n, const char *desc)
{
	void	*res_std;
	void	*res_ft;

	res_std = memchr(s, c, n);
	res_ft = ft_memchr(s, c, n);
	printf("Test %d: %s\n", test_id, desc);
	printf("  Standard : %p\n", res_std);
	printf("  Your ft  : %p\n", res_ft);
	if (res_std == res_ft)
		printf("  Result   : ✅ PASS\n\n");
	else
		printf("  Result   : ❌ FAIL\n\n");
}

int	main(void)
{
	char			str1[] = "Hello World";
	char			str2[] = "Hello\0World";
	unsigned char	arr[] = {10, 20, 200, 30, 40};

	printf("==================================================\n");
	printf("            MEMCHR TEST SUITE (LIBFT)             \n");
	printf("==================================================\n\n");
	// 1. بحث عادي داخل نص
	run_test(1, str1, 'W', 11, "Standard search for 'W'");
	// 2. البحث عن حرف يقع بعد '\0' (مهم جداً: الفرق الرئيسي عن strchr)
	run_test(2, str2, 'W', 11, "Search 'W' after null terminator '\\0'");
	// 3. البحث عن الـ '\0' نفسها
	run_test(3, str1, '\0', 11, "Search for '\\0' within byte limit");
	// 4. الحرف موجود لكنه خارج نطاق n
	run_test(4, str1, 'W', 3, "Char exists but outside n bytes range");
	// 5. الحرف غير موجود نهائياً
	run_test(5, str1, 'z', 11, "Search non-existing character");
	// 6. حالة n = 0 (يجب إرجاع NULL فوراً)
	run_test(6, str1, 'H', 0, "n = 0 bytes limit");
	// 7. اختبار الـ Unsigned Char مع قيم أكبر من 127 (Extended ASCII)
	run_test(7, arr, 200, 5, "Unsigned char handling (> 127 / Extended ASCII)");
	return (0);
}*/
