/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-bel <zait-bel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 16:30:29 by zait-bel          #+#    #+#             */
/*   Updated: 2023/11/13 19:05:20 by zait-bel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	l;

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

// int main(void)
// {
// 	size_t num = 0 ;
// 	num = ft_strlcat( NULL, "", 0);
// 	printf("%zu" , num  );
// }
