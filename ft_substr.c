/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kothman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 10:50:06 by kothman           #+#    #+#             */
/*   Updated: 2026/10/04 14:18:41 by kothman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	size;
	char	*str;

	if (s == NULL)
		return (NULL);
	size = ft_strlen(s);
	if (len >= size)
		len = size;
	str = (char *)malloc((1 + len) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	if (start < ft_strlen(s))
	{
		while (i < len)
		{
			str[i++] = s[start++];
		}
	}
	str[i] = '\0';
	return (str);
}
/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char		*ft_substr(char const *s, unsigned int start, size_t len);

static void	check_substr(int test_num, char const *s, unsigned int start,
		size_t len, char const *expected)
{
	char	*res;

	res = ft_substr(s, start, len);
	if (!res && !expected)
	{
		printf("Test %d: PASS\n", test_num);
		return ;
	}
	if (!res || !expected)
	{
		printf("Test %d: FAIL\n", test_num);
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
	check_substr(1, "42 Amman Network", 3, 5, "Amman");
	check_substr(2, "Hello World", 0, 5, "Hello");
	check_substr(3, "Libft", 10, 5, "");
	check_substr(4, "42Amman", 2, 50, "Amman");
	check_substr(5, "Hello World", 3, 0, "");
	check_substr(6, "", 0, 5, "");
	check_substr(7, NULL, 0, 5, NULL);
	return (0);
}*/
