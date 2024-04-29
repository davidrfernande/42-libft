/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uputnbr_pf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidro2 <davidro2@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:15:30 by david             #+#    #+#             */
/*   Updated: 2024/04/29 23:09:56 by davidro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(unsigned int n)
{
	int	len;

	len = 0;
	if (n == 0)
		len++;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static char	*ft_litoa(unsigned int n)
{
	unsigned int	len;
	char			*str;

	len = ft_intlen(n);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	str[len] = '\0';
	while (n != 0)
	{
		str[len - 1] = (n % 10) + 48;
		n = n / 10;
		len--;
	}
	return (str);
}

int	ft_uputnbr_pf(unsigned int nb)
{
	char	*temp;

	temp = ft_litoa(nb);
	ft_putstr_pf(temp);
	free(temp);
	return (ft_intlen(nb));
}

// int main()
// {
//     printf("\ncharacters printed:%u", ft_uputnbr_pf(-1));
// }