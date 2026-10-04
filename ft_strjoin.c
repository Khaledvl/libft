/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kothman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 14:19:30 by kothman           #+#    #+#             */
/*   Updated: 2026/10/04 16:31:18 by kothman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*str;

	if (s1 == NULL)
		return (ft_strdup(s2));
	if (s2 == NULL)
		return (ft_strdup(s1));
	str = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		str[i++] = s1[j++];
	}
	j = 0;
	while (s2[i])
	{
		str[i++] = s2[j++];
	}
	str[i] = '\0';
	return (str);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char		*ft_strjoin(char const *s1, char const *s2);

static void	check_strjoin(int test_num, char const *s1, char const *s2,
		char const *expected)
{
	char	*res;

	res = ft_strjoin(s1, s2);
	if (!res && !expected)
	{
		printf("Test %d: PASS\n", test_num);
		return ;
	}
	if (!res || !expected)
	{
		printf("Test %d: FAIL (Expected: %s, Got: %s)\n", test_num,
			expected ? expected : "NULL", res ? res : "NULL");
		free(res);
		return ;
	}
	if (strcmp(res, expected) == 0)
		printf("Test %d: PASS\n", test_num);
	else
		printf("Test %d: FAIL (Expected: \"%s\", Got: \"%s\")\n", test_num,
			expected, res);
	free(res);
}

int	main(void)
{
	printf("==================================================\n");
	printf("            FT_STRJOIN TEST SUITE                 \n");
	printf("==================================================\n\n");
	// 1. دمج عادي
	check_strjoin(1, "Hello, ", "World!", "Hello, World!");
	// 2. النص الأول فارغ (s1 = "")
	check_strjoin(2, "", "42 Amman", "42 Amman");
	// 3. النص الثاني فارغ (s2 = "")
	check_strjoin(3, "42 Amman", "", "42 Amman");
	// 4. النصان فارغان
	check_strjoin(4, "", "", "");
	// 5. رموز خاصة وسطر جديد
	check_strjoin(5, "Line 1\n", "\tLine 2", "Line 1\n\tLine 2");
	// 6. s1 = NULL -> المتوقع إرجاع نسخة من s2 ("test")
	check_strjoin(6, NULL, "test", "test");
	// 7. s2 = NULL -> المتوقع إرجاع نسخة من s1 ("test")
	check_strjoin(7, "test", NULL, "test");
	// 8. الاثنين NULL -> المتوقع إرجاع NULL
	check_strjoin(8, NULL, NULL, NULL);
	return (0);
}*/
