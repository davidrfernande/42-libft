/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidro2 <davidro2@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:01:24 by david             #+#    #+#             */
/*   Updated: 2024/04/29 23:04:36 by davidro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_tohex(unsigned long n, char *base, int counter)
{
	if (n >= 16)
	{
		counter += ft_tohex(n / 16, base, counter);
	}
	write(1, &base[n % 16], 1);
	return (counter + 1);
}

int	ft_puthex_pf(unsigned long n, char c)
{
	char	*base;
	int		counter;

	counter = 0;
	if (c == 'x')
	{
		base = "0123456789abcdef";
		counter = ft_tohex(n, base, counter);
	}
	else if (c == 'X')
	{
		base = "0123456789ABCDEF";
		counter = ft_tohex(n, base, counter);
	}
	return (counter);
}

// int main()
// {
//     ft_puthex_pf(-1, 'x');
//     write(1, "\n", 1);
//     printf("original: %x", -1);
// }