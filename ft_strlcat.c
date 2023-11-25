/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-bel <zait-bel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 16:30:29 by zait-bel          #+#    #+#             */
/*   Updated: 2023/11/23 21:15:08 by zait-bel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	l;

	if ((!dest && n == 0) || n == 0)
		return (ft_strlen(src));
	i = 0;
	j = 0;
	l = 0;
	while (dest[i] && i < n)
		i++;
	while (src[j])
		j++;
	if (i == n)
		return (i + j);
	if (i < n - 1)
	{
		while (src[l] && i + l < n - 1)
		{
			dest[i + l] = src[l];
			l++;
		}
	}
	dest[i + l] = '\0';
	return (i + j);
}
