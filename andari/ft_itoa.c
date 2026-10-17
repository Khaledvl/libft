/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kothman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 12:58:15 by kothman           #+#    #+#             */
/*   Updated: 2026/10/13 12:59:48 by kothman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	fill_malloc(char *arry, long num, size_t len)
{
	if (num > 0)
	{
		fill_malloc(arry, num / 10, len - 1);
		arry[len] = num % 10 + '0';
	}
}

static int	count_digits(long n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		count++;
		n /= 10;
	}
	return (count);
}

static void	intliaztion_malloc(char *ptr, long num, size_t len, int signal)
{
	if (signal < 0 && num > 0)
	{
		ptr[0] = '-';
		fill_malloc(ptr, num, len - 1);
	}
	else if (signal > 0 && num > 0)
	{
		fill_malloc(ptr, num, len - 1);
	}
	else
	{
		ptr[0] = 0 + '0';
	}
	ptr[len] = '\0';
}

char	*ft_itoa(int n)
{
	int		signal;
	long	num;
	size_t	len;
	char	*ptr;

	signal = 1;
	len = 0;
	num = n;
	if (num < 0)
	{
		signal = -1;
		num *= -1;
		len++;
	}
	len += count_digits(num);
	ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	intliaztion_malloc(ptr, num, len, signal);
	return (ptr);
}
/*#include <stdio.h>

char		*ft_itoa(int n);

int	main(void)
{
	char	*str;

	str = ft_itoa(42);
	printf("Test 1: %s\n", str);
	free(str);
	str = ft_itoa(-1337);
	printf("Test 2: %s\n", str);
	free(str);
	str = ft_itoa(0);
	printf("Test 3: %s\n", str);
	free(str);
	str = ft_itoa(-2147483648);
	printf("Test 4: %s\n", str);
	free(str);
	return (0);
}*/
