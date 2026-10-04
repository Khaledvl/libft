/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kothman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 11:48:50 by kothman           #+#    #+#             */
/*   Updated: 2026/10/03 12:03:07 by kothman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
/*#include <stdio.h>
#include <string.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n);

void	run_test(int id, const void *s1, const void *s2, size_t n,
		const char *desc)
{
	int	res_std;
	int	res_ft;

	res_std = memcmp(s1, s2, n);
	res_ft = ft_memcmp(s1, s2, n);
	printf("Test %d: %s (n=%zu)\n", id, desc, n);
	printf("  Standard : %d\n", res_std);
	printf("  Your ft  : %d\n", res_ft);
	if ((res_std == 0 && res_ft == 0) || (res_std > 0 && res_ft > 0)
		|| (res_std < 0 && res_ft < 0))
		printf("  Result   : ✅ PASS\n\n");
	else
		printf("  Result   : ❌ FAIL\n\n");
}

int	main(void)
{
	printf("==================================================\n");
	printf("            MEMCMP TEST SUITE (LIBFT)             \n");
	printf("==================================================\n\n");
	// 1. تطابق تام داخل الذاكرة
	run_test(1, "Hello", "Hello", 5, "Identical memory blocks");
	// 2. اختلاف بعد '\0' (الاختبار الجوهري الذي يفرق memcmp عن strncmp)
	run_test(2, "Hello\0World", "Hello\0There", 11,
		"Difference AFTER null terminator '\\0'");
	// 3. اختلاف داخل نطاق n
	run_test(3, "Hello World", "Hello There", 10, "Difference within n bytes");
	// 4. اختلاف يقع بعد نطاق n (يجب إرجاع 0)
	run_test(4, "Hello World", "Hello There", 5, "Difference outside n bytes");
	// 5. حالة n = 0 (يجب إرجاع 0 فوراً)
	run_test(5, "Hello", "World", 0, "n = 0 bytes limit");
	// 6. اختبار Unsigned Char مع قيم أكبر من 127
	run_test(6, "\200", "\0", 1, "Unsigned char handling (> 127)");
	return (0);
}*/
