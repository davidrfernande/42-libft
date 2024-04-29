/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidro2 <davidro2@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 12:33:10 by davidro2          #+#    #+#             */
/*   Updated: 2024/04/29 23:04:49 by davidro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		counter;
	int		i;

	i = 0;
	counter = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%' && ft_strrchr("csdpiuxX%", str[i + 1]))
		{
			i++;
			counter = ft_print_format(str[i], args, counter);
			i++;
			continue ;
		}
		write(1, &str[i], 1);
		counter++;
		i++;
	}
	va_end(args);
	return (counter);
}

// int	main(void)
// {
// 	printf("BENFICA %s BENFICA", "ola");
// 	ft_printf("BENFICA %s BENFICA", "ola");
// }
