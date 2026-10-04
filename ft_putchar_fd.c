/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kothman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 17:17:17 by kothman           #+#    #+#             */
/*   Updated: 2026/10/04 17:39:49 by kothman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*#include <fcntl.h>

int	main(void)
{
	int	fd1;

	fd1 = open("text", O_CREAT | O_RDWR);
	ft_putchar_fd('a', fd1);
	close(fd1);
}*/
