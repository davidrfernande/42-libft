/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:42:20 by davidro2          #+#    #+#             */
/*   Updated: 2023/10/26 23:05:19 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Outputs the string ’s’ to the given file descriptor
// followed by a newline.

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd(10, fd);
}

// int	main(void)
// {
// 	int	fd;
// 	int	str;

// 	fd = 1;
// 	str = "onepiece";
// 	ft_putendl_fd(str, fd);
// }

// int	main(void)
// {
// 	int	fd;
// 	char	*str;

// 	str = "onepiece";
// 	fd = open("./txt/testputendl_fd", O_WRONLY | O_CREAT | O_TRUNC, 0642);
// 	ft_putendl_fd(str, fd);
// 	close(fd);
// }