/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vdtohex_pf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidro2 <davidro2@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:49:35 by davidro2          #+#    #+#             */
/*   Updated: 2024/04/29 23:03:58 by davidro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_vdtohex_pf(unsigned long int ptr)
{
	int	counter;

	counter = 0;
	if (!ptr)
	{
		counter += write(1, "(nil)", 5);
		return (counter);
	}
	counter += write(1, "0x", 2);
	counter += ft_puthex_pf(ptr, 'x');
	return (counter);
}

// int main()
// {
// 	int x = 15;
// 	void	*ptr = (void *)&x;
//     printf("%p", ptr);
// }