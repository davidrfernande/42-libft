/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:30:48 by davidro2          #+#    #+#             */
/*   Updated: 2023/10/27 14:56:10 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// splits a string in an array of strings whenever a
// certain character appears

static int	ft_countw(const char *str, char c)
{
	int	i;
	int	w;

	i = 0;
	w = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		while (str[i] != c && str[i])
			i++;
		w++;
	}
	if (str[i - 1] == c)
		w--;
	return (w);
}

char	**ft_split(char const *s, char c)
{
	int		x;
	int		j;
	size_t	i;
	char	**strs;

	x = 0;
	i = 0;
	strs = (char **)malloc((ft_countw(s, c) + 1) * sizeof(unsigned char *));
	if (!strs)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = 0;
		while (s[i + j] != c && s[i + j])
			j++;
		if (j > 0)
			strs[x++] = ft_substr(s, i, j);
		i = i + j;
	}
	strs[x] = 0;
	return (strs);
}

// static void	ft_printstrs(char **splitted)
// {
// 	int	i = 0;

// 	while (splitted[i])
// 	{
// 		printf("%s \n", splitted[i]);
// 		i++;
// 	}
// }

// int	main()
// {
// 	char	*str = "onepieceisreal";
// 	char	c = 'i';
// 	char	**splitted;
// 	splitted = ft_split(str, c);
// 	ft_printstrs(splitted);
// 	int i = 0;
// 	while (splitted[i])
// 	{
// 		free (splitted[i]);
// 		i++;
// 	}
// 	free (splitted);
// }