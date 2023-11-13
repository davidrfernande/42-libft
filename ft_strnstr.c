/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:20:26 by davidro2          #+#    #+#             */
/*   Updated: 2023/10/30 00:29:28 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//finds the string 'needle' in the string 'hay'
//if it finds returns a pointer to the first occurrence of 'needle'
//in 'hay'

char	*ft_strnstr(const char *hay, const char *needle, size_t n)
{
	size_t	x;
	size_t	y;

	x = 0;
	if (needle[0] == '\0')
		return ((char *)hay);
	while (hay[x] && x < n)
	{
		y = 0;
		while (hay[x + y] == needle[y] && hay[x + y] && needle[y] && x + y < n)
			y++;
		if (!needle[y])
			return ((char *)(hay + x));
		x++;
	}
	return (0);
}
