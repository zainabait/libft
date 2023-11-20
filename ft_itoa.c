/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-bel <zait-bel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 20:14:07 by zait-bel          #+#    #+#             */
/*   Updated: 2023/11/13 15:48:40 by zait-bel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digit(int n)
{
	long	nbr;
	int		count;

	nbr = n;
	count = 0;
	if (nbr == 0)
		count ++;
	if (nbr < 0)
	{
		count++;
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		nbr = nbr / 10;
		count ++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		count;
	long	nbr;

	nbr = n;
	count = count_digit(n);
	str = ft_calloc(count + 1, sizeof(char));
	if (!str)
		return (NULL);
	str[count] = '\0';
	if (nbr == 0)
		str[0] = '0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		count--;
		str[count] = nbr % 10 + 48 ;
		nbr = nbr / 10;
	}
	return (str);
}
