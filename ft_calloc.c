/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:09:13 by davidro2          #+#    #+#             */
/*   Updated: 2023/10/27 01:31:01 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// allocates memory for an arrays with zeros.
// 'nitems' is the number of elements that is going
// to allocate and 'size' is the size of each item.

void	*ft_calloc(size_t nitems, size_t size)
{
	unsigned char	*zero;

	zero = (unsigned char *)malloc(nitems * size);
	if (!zero)
		return (NULL);
	ft_bzero(zero, nitems * size);
	return (zero);
}
