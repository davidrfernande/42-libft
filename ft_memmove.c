/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 18:30:31 by davidro2          #+#    #+#             */
/*   Updated: 2023/10/29 01:21:54 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//copys the string 'src' to the string 'dest'
//even if the strings ocupy the same memory.
//ex. dest=3456 src=01234
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	x;

	if (!dest && !src)
		return (NULL);
	if (src > dest)
	{
		x = 0;
		while (x < n)
		{
			((unsigned char *)dest)[x] = ((unsigned char *)src)[x];
			x++;
		}
	}
	else
	{
		x = n;
		while (x > 0)
		{
			x--;
			((unsigned char *)dest)[x] = ((unsigned char *)src)[x];
		}
	}
	return (dest);
}
