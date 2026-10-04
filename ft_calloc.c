/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kothman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 14:24:56 by kothman           #+#    #+#             */
/*   Updated: 2026/10/04 13:38:51 by kothman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_calloc(size_t count, size_t size);

void	run_test(int id, size_t count, size_t size, const char *desc)
{
	void			*ptr_std;
	void			*ptr_ft;
	size_t			total;
	unsigned char	*bytes;
	int				is_zero;

	total = count * size;
	ptr_std = calloc(count, size);
	ptr_ft = ft_calloc(count, size);
	printf("Test %d: %s (count=%zu, size=%zu)\n", id, desc, count, size);
	// حالة count أو size يساوي 0
	if (total == 0)
	{
		if ((ptr_std == NULL && ptr_ft == NULL) || (ptr_std != NULL
				&& ptr_ft != NULL))
			printf("  Result   : ✅ PASS (Safe zero allocation)\n\n");
		else
			printf("  Result   : ❌ FAIL\n\n");
		free(ptr_std);
		free(ptr_ft);
		return ;
	}
	// فحص نجاح الحجز
	if (!ptr_ft)
	{
		printf("  Result   : ❌ FAIL (ft_calloc returned NULL)\n\n");
		free(ptr_std);
		return ;
	}
	// فحص تصفيير جميع البايتات (هل كل بايت يساوي 0 فعلاً؟)
	is_zero = 1;
	bytes = (unsigned char *)ptr_ft;
	for (size_t i = 0; i < total; i++)
	{
		if (bytes[i] != 0)
		{
			is_zero = 0;
			break ;
		}
	}
	if (is_zero)
		printf("  Result   : ✅ PASS (All bytes are 0)\n\n");
	else
		printf("  Result   : ❌ FAIL (Memory contains garbage!)\n\n");
	free(ptr_std);
	free(ptr_ft);
}

int	main(void)
{
	printf("==================================================\n");
	printf("            CALLOC TEST SUITE (LIBFT)             \n");
	printf("==================================================\n\n");
	// 1. حجز مصفوفة أعداد صحيحة
	run_test(1, 5, sizeof(int), "5 Integers allocation");
	// 2. حجز نص مكون من 10 أحرف
	run_test(2, 10, sizeof(char), "10 Chars allocation");
	// 3. حجز كتلة كبيرة من الذاكرة (100 بايت)
	run_test(3, 100, 1, "100 Bytes block allocation");
	// 4. حالة count = 0
	run_test(4, 0, 5, "count = 0");
	// 5. حالة size = 0
	run_test(5, 5, 0, "size = 0");
	return (0);
}*/
