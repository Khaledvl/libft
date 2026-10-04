/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kothman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 16:40:50 by kothman           #+#    #+#             */
/*   Updated: 2026/10/01 17:16:41 by kothman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
/*#include <stdio.h>
#include <string.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n);

void	run_test(int test_id, const char *s1, const char *s2, size_t n)
{
	int	res_std;
	int	res_ft;

	res_std = strncmp(s1, s2, n);
	res_ft = ft_strncmp(s1, s2, n);
	printf("Test %d: s1=\"%s\", s2=\"%s\", n=%zu\n", test_id, s1, s2, n);
	printf("  Standard : %d\n", res_std);
	printf("  Your ft  : %d\n", res_ft);
	// الفحص يعتمد على إشارة الناتج (0، موجب، أو سالب) أو المطابقة التامة للفرق
	if ((res_std == 0 && res_ft == 0) || (res_std > 0 && res_ft > 0)
		|| (res_std < 0 && res_ft < 0))
		printf("  Result   : ✅ PASS\n\n");
	else
		printf("  Result   : ❌ FAIL\n\n");
}

int	main(void)
{
	printf("==================================================\n");
	printf("            STRNCMP TEST SUITE (LIBFT)            \n");
	printf("==================================================\n\n");
	// 1. التطابق التام مع n أطول من النصين
	run_test(1, "Hello", "Hello", 10);
	// 2. التطابق في أول n أحرف بالرغم من اختلاف باقي الكلمة
	run_test(2, "Hello World", "Hello There", 5);
	// 3. الاختلاف داخل النطاق (s1 أكبر من s2)
	run_test(3, "Hello World", "Hello There", 10);
	// 4. الاختلاف داخل النطاق (s1 أصغر من s2)
	run_test(4, "Hello", "Helza", 5);
	// 5. حالة n = 0 (يجب أن ترجع 0 فوراً بدون مقارنة)
	run_test(5, "Hello", "World", 0);
	// 6. مقارنة نصين ينتهيان بـ '\0' عند طول مختلف
	run_test(6, "Test", "Testing", 6);
	// 7. حالة الأحرف الخاصة والـ Unsigned Char (اختبار مهم لـ Libft)
	run_test(7, "\200", "\0", 1);
	return (0);
}*/
