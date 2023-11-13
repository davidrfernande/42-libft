/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:06:34 by davidro2          #+#    #+#             */
/*   Updated: 2023/10/26 23:07:40 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Outputs the character ’c’ to the given file descriptor.

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int	main(void)
// {
// 	int fd = 1;
// 	char c = 'c';

// 	ft_putchar_fd(c , fd);
// }

// int	main(void)
// {
// 	int		fd;
// 	char	c;

// 	c = 'c';
// 	fd = open("./txt/testputchar_fd", O_WRONLY | O_CREAT | O_TRUNC, 0642);
// 	ft_putchar_fd(c, fd);
// 	close(fd);
// }