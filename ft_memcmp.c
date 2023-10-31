/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:11:37 by davidro2          #+#    #+#             */
/*   Updated: 2023/10/27 18:33:14 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//compares to sets of memorys and returns the diferrence between
//them, only reading the number of characters given in 'num'

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	size_t			x;
	unsigned char	*str1;
	unsigned char	*str2;

	x = 0;
	str1 = (unsigned char *)ptr1;
	str2 = (unsigned char *)ptr2;
	while (num > x)
	{
		if (str1[x] != str2[x])
			return (str1[x] - str2[x]);
		x++;
	}
	return (0);
}
