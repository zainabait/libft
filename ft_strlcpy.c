/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-bel <zait-bel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:23:17 by zait-bel          #+#    #+#             */
/*   Updated: 2023/11/04 16:24:14 by zait-bel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dest, char const *src, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	if (n == 0)
		return (i);
	while (src[j] && j < n - 1)
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (i);
}

/*int main(void)
{
	char	src[] = "heeey";
	char	dst[] = "hiiiii";
	char	src1[] = "heeey";
	char	dst1[] = "hiiiii";

	printf("%zu\n", ft_strlcpy(dst, src, 5));
	printf("%s\n", dst);
	printf("%zu\n", ft_strlcpy(dst1, src1, 5));
	printf("%s", dst1);
}*/
