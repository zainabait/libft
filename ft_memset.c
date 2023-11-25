/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-bel <zait-bel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:07:00 by zait-bel          #+#    #+#             */
/*   Updated: 2023/11/24 18:04:33 by zait-bel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t len)
{
	size_t				i;
	unsigned char		*ptr1;

	ptr1 = (unsigned char *)ptr;
	i = 0;
	while (i < len)
	{
		ptr1[i] = (unsigned char)value;
		i++;
	}
	return (ptr);
}
