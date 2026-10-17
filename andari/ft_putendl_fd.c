/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kothman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 17:51:21 by kothman           #+#    #+#             */
/*   Updated: 2026/10/04 17:53:37 by kothman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
/*#include <fcntl.h>

void	ft_putendl_fd(char *s, int fd);

int	main(void)
{
	int	fd;

	fd = open("test_putendl.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd < 0)
		return (1);
	ft_putendl_fd("First Line", fd);
	ft_putendl_fd("Second Line", fd);
	close(fd);
	return (0);
}*/
