/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-bel <zait-bel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:38:10 by zait-bel          #+#    #+#             */
/*   Updated: 2023/11/07 15:08:40 by zait-bel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dst1;
	char	*src1;
	size_t	i;

	i = 0;
	dst1 = (char *)dst;
	src1 = (char *)src;
	if (!dst1 && !src1)
		return (dst);
	while (i < n)
	{
		dst1[i] = src1[i];
		i++;
	}
	return (dst);
}

/*int	main(void)
{
	const char	src[] = "hello";
	const size_t	l = 3;
	char	dst[] = "hh";
	char	dst1[9] = "hh";

	printf ("%s\n", ft_memcpy(dst, src, l));
	printf ("%s", memcpy(dst1, src, 3));
}*/
