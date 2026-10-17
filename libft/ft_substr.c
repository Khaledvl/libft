/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kothman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 10:50:06 by kothman           #+#    #+#             */
/*   Updated: 2026/10/17 14:11:18 by kothman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	s_len;
	size_t	i;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
#include <stdio.h>

int	main(void)
{
	char	*str;

	// اقتطاع 5 حروف ابتداءً من الإندكس 7
	str = ft_substr("Hello, World!", 7, 5);
	printf("Result: %s\n", str);
	free(str);

	// حالة الأمان: start أكبر من طول النص الأصلي
	str = ft_substr("42Amman", 20, 5);
	printf("Edge Case (start > len): \"%s\"\n", str);
	free(str);

	return (0);
}
*/
