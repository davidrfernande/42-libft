/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidro2 <davidro2@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:26:04 by davidro2          #+#    #+#             */
/*   Updated: 2024/04/29 23:03:51 by davidro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*get_next_line(int fd)
{
	static char	buffer[FOPEN_MAX][BUFFER_SIZE + 1];
	char		*line;
	int			i;
	
	i = 0;
	if (fd > FOPEN_MAX || read(fd, 0, 0) < 0 || BUFFER_SIZE <= 0)
	{
		if (fd > 0 || fd <= FOPEN_MAX)
			while (i <= BUFFER_SIZE)
				buffer[fd][i++] = 0;
		return (NULL);
	}
	line = NULL;
	while (buffer[fd][0] || read(fd, buffer[fd], BUFFER_SIZE) > 0)
	{
		line = ft_strjoin(line, buffer[fd]);
		ft_cleanbuffer(buffer[fd]);
		if (line[ft_strlen(line) - 1] == '\n')
			return (line);
	}
	return (line);
}

// int main()
// {
// 	int fd1;
// 	int fd2;
// 	char	*line1;
// 	char	*line2;

// 	fd1 = open ("./test/test1.txt", O_RDONLY);
// 	fd2 = open ("./test/test2.txt", O_RDONLY);
// 	while (1)
// 	{
// 		line1 = get_next_line(fd1);
// 		line2 = get_next_line(fd2);
// 		printf("FD1:%sFD2:%s", line1, line2);
// 		if (line1 == NULL && line2 == NULL)
// 			break;
// 		free(line1);
// 		free(line2);
// 	}
// 	free(line1);
// 	free(line2);
// }