/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 10:48:05 by davidro2          #+#    #+#             */
/*   Updated: 2023/10/29 15:48:09 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//duplicates a string allocating memory to the 
//duplication

char	*ft_strdup(const char *string)
{
	char	*dup;
	size_t	x;
	size_t	strlen;

	strlen = ft_strlen(string);
	dup = (char *)malloc((strlen + 1) * sizeof(char));
	x = 0;
	if (!dup)
		return (NULL);
	while (string[x] != '\0')
	{
		dup[x] = string[x];
		x++;
	}
	dup[x] = '\0';
	return (dup);
}
