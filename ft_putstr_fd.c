/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kothman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 17:46:43 by kothman           #+#    #+#             */
/*   Updated: 2026/10/04 17:51:05 by kothman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	if (s == NULL)
		return ;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}
/*#include <fcntl.h>

void	ft_putstr_fd(char *s, int fd);

int	main(void)
{
	int	fd;

	fd = open("test_putstr.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd < 0)
		return (1);
	ft_putstr_fd("Hello, 42 Amman!", fd);
	ft_putstr_fd(" Next word on same line.\n", fd);
	close(fd);
	return (0);
}*/
