/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidro2 <davidro2@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:30:48 by davidro2          #+#    #+#             */
/*   Updated: 2024/04/23 12:35:09 by davidro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// splits a string in an array of strings whenever a
// certain character appears

static int	ft_cwords(const char	*str, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		while (str[i] == c && str[i])
			i++;
		if (str[i] != c && str[i])
			words++;
		while (str[i] != c && str[i])
			i++;
	}
	return (words);
}

static int	ft_alloc_free(char **arraystr, int x, int j)
{
	arraystr[x] = (char *)malloc(j + 1);
	if (arraystr[x] == NULL)
	{
		while (x >= 0)
		{
			free(arraystr[x]);
			x--;
		}
		free (arraystr);
		return (1);
	}
	return (0);
}

static void	ft_giveword(const char *str, char *lstr, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
	{
		lstr[i] = str[i];
		i++;
	}
	lstr[i] = '\0';
}

static void	*ft_putstring(const char *str, char c, char **arraystr)
{
	int		i;
	int		j;
	int		x;
	int		error;

	i = 0;
	x = 0;
	while (str[i])
	{
		if (str[i] == c)
			i++;
		else
		{
			j = 0;
			while (str[i + j] != c && str[i + j])
				j++;
			error = ft_alloc_free(arraystr, x, j);
			if (error)
				return (NULL);
			ft_giveword(str + i, arraystr[x++], c);
			i += j;
		}
	}
	arraystr[x] = NULL;
	return (arraystr);
}

char	**ft_split(char const *str, char c)
{
	char	**arraystr;

	arraystr = (char **)malloc(sizeof(char *) * (ft_cwords(str, c) + 1));
	if (arraystr == NULL)
		return (NULL);
	if (!ft_putstring(str, c, arraystr))
		return (NULL);
	return (arraystr);
}

// static void	ft_printarraystrs(char **splitted)
// {
// 	int	i = 0;

// 	while (splitted[i])
// 	{
// 		printf("%str \n", splitted[i]);
// 		i++;
// 	}
// }

// int	main()
// {
// 	char	*str = "onepieceisreal";
// 	char	c = 'i';
// 	char	**splitted;
// 	splitted = ft_split(str, c);
// 	ft_prinarraystrs(splitted);
// 	int i = 0;
// 	while (splitted[i])
// 	{
// 		free (splitted[i]);
// 		i++;
// 	}
// 	free (splitted);
// }