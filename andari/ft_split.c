/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kothman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 13:21:36 by kothman           #+#    #+#             */
/*   Updated: 2026/10/13 13:23:20 by kothman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ddelimiter(char const *str, char c, int j)
{
	int	i;

	i = 0;
	while (str[j] && str[j] == c)
	{
		i++;
		j++;
	}
	return (i);
}

static int	strnum(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static int	strsublen(char const *s, char c, int *index)
{
	int	count;
	int	i;

	if (s[0] == c && *index == 0)
		*index = ddelimiter(s, c, 0);
	i = *index;
	count = 0;
	while (s[i] != c && s[i])
	{
		count++;
		i++;
	}
	return (count);
}

static void	freeall(char **sstr, int strlen)
{
	int	i;

	i = 0;
	while (i < strlen)
	{
		free(sstr[i]);
		i++;
	}
	free(sstr);
}

char	**ft_split(char const *s, char c)
{
	int		n[4];
	char	**sstr;

	n[1] = 0;
	n[3] = 0;
	if (!s)
		return (NULL);
	n[0] = strnum(s, c);
	sstr = malloc((n[0] + 1) * sizeof(char *));
	if (!sstr)
		return (NULL);
	while (n[1] < n[0])
	{
		n[2] = strsublen(s, c, &n[3]);
		sstr[n[1]] = ft_substr(s, n[3], n[2]);
		if (!sstr[n[1]++])
		{
			freeall(sstr, --n[1]);
			return (NULL);
		}
		n[3] += n[2] + ddelimiter(s, c, n[3] + n[2]);
	}
	sstr[n[1]] = NULL;
	return (sstr);
}
/*#include <stdio.h>

char		**ft_split(char const *s, char c);

int	main(void)
{
	char	**res;
	int		i;

	res = ft_split("  hello 42 amman  ", ' ');
	if (!res)
		return (1);
	i = 0;
	while (res[i])
	{
		printf("%s\n", res[i]);
		free(res[i]);
		i++;
	}
	free(res);
	return (0);
}*/
