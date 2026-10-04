/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kothman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 12:03:46 by kothman           #+#    #+#             */
/*   Updated: 2026/10/03 13:14:55 by kothman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	while (i < len && haystack[i])
	{
		j = 0;
		while (haystack[i + j] == needle[j] && haystack[i + j] && needle[j] && i
			+ j < len)
			j++;
		if (!needle[j])
			return ((char *)haystack + i);
		else
			i++;
	}
	return (0);
}
/*#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

void	run_test(int id, const char *haystack, const char *needle, size_t len,
		const char *expected, const char *desc)
{
	char	*res_ft;

	res_ft = ft_strnstr(haystack, needle, len);
	printf("Test %d: %s\n", id, desc);
	printf("  haystack : \"%s\"\n", haystack);
	printf("  needle   : \"%s\"\n", needle);
	printf("  len      : %zu\n", len);
	printf("  Your ft  : %s\n", res_ft ? res_ft : "(null)");
	if ((expected == NULL && res_ft == NULL) || (expected != NULL
			&& res_ft != NULL && strcmp(expected, res_ft) == 0))
		printf("  Result   : ✅ PASS\n\n");
	else
		printf("  Result   : ❌ FAIL (Expected: %s)\n\n",
			expected ? expected : "(null)");
}

int	main(void)
{
	printf("==================================================\n");
	printf("           STRNSTR TEST SUITE (LIBFT)             \n");
	printf("==================================================\n\n");
	// 1. العثور على الكلمة بالكامل داخل النطاق
	run_test(1, "Hello World", "World", 11, "World", "Standard search (Found)");
	// 2. الكلمة موجودة لكن ينتهي الـ len قبل إكمالها
	run_test(2, "Hello World", "World", 8, NULL,
		"Needle exists but exceeds len");
	// 3. البحث عن Needle فارغ "" (يجب إرجاع haystack نفسه)
	run_test(3, "Hello World", "", 5, "Hello World", "Empty needle \"\"");
	// 4. الكلمة موجودة في بداية النص تماماً
	run_test(4, "Hello World", "Hello", 5, "Hello World",
		"Needle at the very beginning");
	// 5. الكلمة غير موجودة إطلاقاً
	run_test(5, "Hello World", "42", 11, NULL, "Non-existing needle");
	// 6. حالة len = 0 مع needle غير فارغ
	run_test(6, "Hello", "H", 0, NULL, "len = 0 limit");
	// 7. تكرار جزئي قبل المطابقة الكاملة
	run_test(7, "aaaabc", "abc", 6, "abc", "Partial matches before full match");
	// 8. قيمة len كبيرة جداً أكبر من طول النص
	run_test(8, "Libft", "ft", 100, "ft", "len is larger than haystack length");
	return (0);
}*/
