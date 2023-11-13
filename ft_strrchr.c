/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:51:32 by davidro2          #+#    #+#             */
/*   Updated: 2023/10/30 00:30:31 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//returns the last occurrence of the character 'c'
//in the string, if not occurred return null.
char	*ft_strrchr(const char *str, int c)
{
	int	x;

	x = ft_strlen(str);
	while (x > 0)
	{
		if (str[x] == (char)c)
			break ;
		x--;
	}
	if (str[x] == (char)c)
		return ((char *)(str + x));
	return (0);
}
