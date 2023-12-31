/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidro2 <davidro2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:21:27 by davidro2          #+#    #+#             */
/*   Updated: 2023/11/07 12:10:11 by davidro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	x;
	size_t	destlen;

	destlen = ft_strlen(dest);
	x = 0;
	if (size > 0 && destlen < size - 1)
	{
		while (src[x] && size - 1 > destlen + x)
		{
			dest[destlen + x] = src[x];
			x++;
		}
		dest[destlen + x] = '\0';
	}
	if (destlen > size)
		destlen = size;
	return (destlen + ft_strlen(src));
}
