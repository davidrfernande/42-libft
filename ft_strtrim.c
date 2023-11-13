/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 18:27:33 by davidro2          #+#    #+#             */
/*   Updated: 2023/10/30 00:35:06 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Allocates (with malloc(3)) and returns a copy of
// ’s1’ with the characters specified in ’set’ removed
// from the beginning and the end of the string.

static int	ft_trim(char s1, char *set)
{
	size_t	set_len;
	int		i;

	i = 0;
	set_len = ft_strlen(set);
	while (set_len > 0)
	{
		if (s1 == (char)set[i])
			return (1);
		i++;
		set_len--;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		l;
	int		r;
	char	*trim;
	char	*str;
	char	*sett;

	str = (char *)s1;
	sett = (char *)set;
	l = 0;
	r = ft_strlen(s1) - 1;
	while (ft_trim(str[l], sett))
		l++;
	while (ft_trim(str[r], sett))
		r--;
	trim = ft_substr(str, l, r - l + 1);
	if (!trim)
		return (NULL);
	return (trim);
}

// int	main()
// {
// 	char	*str = "pponepiecepp";

// 	printf("%s", ft_strtrim(str, "p"));
// }