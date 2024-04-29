/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidro2 <davidro2@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:55:02 by davidro2          #+#    #+#             */
/*   Updated: 2024/04/29 23:03:44 by davidro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strlen_get(char *str)
{
	int	i;

	i = 0;
	while (str && str[i] && str[i] != '\n')
		i++;
	if (str && str[i] == '\n')
		i++;
	return (i);
}

char	*ft_strjoin_get(char *line, char *buffer)
{
	char	*join;
	int		i;
	int		j;

	i = 0;
	j = 0;
	join = malloc((ft_strlen(line) + ft_strlen(buffer) + 1) * sizeof(char));
	if (!join)
		return (NULL);
	while (line && line[i])
	{
		join[i] = line[i];
		i++;
	}
	while (buffer && buffer[j] && buffer[j] != '\n')
	{
		join[i + j] = buffer[j];
		j++;
	}
	if (buffer && buffer[j] == '\n')
		join[i + j++] = '\n';
	join[i + j] = 0;
	free(line);
	return (join);
}

void	ft_cleanbuffer(char *buffer)
{
	int	i;
	int	j;
	
	i = 0;
	j = 0;
	while (buffer && buffer[i] && buffer[i] != '\n')
		buffer[i++] = 0;
	if (buffer && buffer[i] == '\n')
	{
		buffer[i++] = 0;
		while (i <= BUFFER_SIZE)
		{
			buffer[j] = buffer[i];
			buffer[i] = 0;
			i++;
			j++;
		}
	}	
}
