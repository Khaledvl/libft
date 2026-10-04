/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kothman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 13:49:01 by kothman           #+#    #+#             */
/*   Updated: 2026/10/03 14:18:11 by kothman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t	i;
	int		sign;
	int		res;

	i = 0;
	sign = 1;
	res = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res * sign);
}
/*#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(const char *str);

void	run_test(int id, const char *str, const char *desc)
{
	int	res_std;
	int	res_ft;

	res_std = atoi(str);
	res_ft = ft_atoi(str);
	printf("Test %d: %s\n", id, desc);
	printf("  Input    : \"%s\"\n", str);
	printf("  Standard : %d\n", res_std);
	printf("  Your ft  : %d\n", res_ft);
	if (res_std == res_ft)
		printf("  Result   : ✅ PASS\n\n");
	else
		printf("  Result   : ❌ FAIL\n\n");
}

int	main(void)
{
	printf("==================================================\n");
	printf("             ATOI TEST SUITE (LIBFT)              \n");
	printf("==================================================\n\n");
	// 1. رقم موجب عادي
	run_test(1, "42", "Simple positive number");
	// 2. رقم سالب عادي
	run_test(2, "-42", "Simple negative number");
	// 3. مسافات ورموز Whitespaces في البداية
	run_test(3, "   \t\n\v\f\r  1234", "Leading whitespaces");
	// 4. وجود إشارة + صريحة
	run_test(4, "+567", "Explicit positive sign");
	// 5. إشارتان متتاليتان (يجب إرجاع 0)
	run_test(5, "--42", "Double minus sign");
	run_test(6, "+-42", "Plus and minus sign");
	// 6. نص يحتوي على حروف بعد الأرقام
	run_test(7, "123ab56", "Digits followed by characters");
	// 7. نص يبدأ بالحروف
	run_test(8, "hello 123", "Starting with non-digits");
	// 8. حدود الـ int (INT_MAX & INT_MIN)
	run_test(9, "2147483647", "INT_MAX boundary");
	run_test(10, "-2147483648", "INT_MIN boundary");
	return (0);
}*/
