/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidro2 <davidro2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:47:57 by davidro2          #+#    #+#             */
/*   Updated: 2023/10/26 16:56:33 by davidro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = n * -1;
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	n = n % 10 + '0';
	ft_putchar_fd(n, fd);
}

// int	main(void)
// {
// 	int	fd;
// 	int	nr;

// 	fd = 1;
// 	nr = 1234567890;
// 	ft_putnbr_fd(nr, fd);
// }

// int	main(void)
// {
// 	int	fd;
// 	int	nr;

// 	nr = 123456789;
// 	fd = open ("./txt/testputnbr_fd", O_WRONLY | O_CREAT | O_TRUNC, 0642);
// 	ft_putnbr_fd(nr, fd);
// 	close(fd);
// }