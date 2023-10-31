/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:11:53 by davidro2          #+#    #+#             */
/*   Updated: 2023/10/29 15:47:02 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//returns the first occurrence of the character 'c'
//in the string, if not occurred return null.
char	*ft_strchr(const char *str, int c)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] == (char)c)
			break ;
		x++;
	}
	if (str[x] == (char)c)
		return ((char *)(str + x));
	return (0);
}
