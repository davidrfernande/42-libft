/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidro2 <davidro2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:51:04 by davidro2          #+#    #+#             */
/*   Updated: 2023/10/10 16:04:14 by davidro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	x;
	int	neg;
	int	final;

	x = 0;
	neg = 1;
	final = 0;
	while ((str[x] >= 9 && str[x] <= 13) || str[x] == 32)
		x++;
	if (str[x] == '+' || str[x] == '-')
	{
		if (str[x] == '-')
		{
			neg = neg * -1;
		}
		x++;
	}
	if (str[x] == '+' || str[x] == '-')
		return (0);
	while (str[x] >= 48 && str[x] <= 57)
	{
		final = final * 10 + (str[x] - 48);
		x++;
	}
	return (final * neg);
}
