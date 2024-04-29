/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidro2 <davidro2@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:15:30 by david             #+#    #+#             */
/*   Updated: 2024/04/29 23:04:25 by davidro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(long n)
{
	int	len;
	int	nr;

	len = 0;
	nr = n;
	if (nr == 0)
		len++;
	if (nr < 0)
	{
		nr = -nr;
		len++;
	}
	while (nr != 0)
	{
		nr = nr / 10;
		len++;
	}
	return (len);
}

char	*ft_litoa(long n)
{
	unsigned int	len;
	unsigned long	nr;
	char			*str;

	len = ft_intlen(n);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		nr = -n;
	}
	else
		nr = n;
	if (nr == 0)
		str[0] = '0';
	str[len] = '\0';
	while (nr != 0)
	{
		str[len - 1] = (nr % 10) + 48;
		nr = nr / 10;
		len--;
	}
	return (str);
}

int	ft_putnbr_pf(long nb)
{
	char	*temp;
	int		len;

	temp = ft_litoa(nb);
	len = ft_strlen_pf(temp);
	ft_putstr_pf(temp);
	free(temp);
	return (len);
}

// int main()
// {
//     printf("\ncharacters printed:%d", ft_putnbr_pf(-99));
// }