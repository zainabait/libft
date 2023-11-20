/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-bel <zait-bel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:48:27 by zait-bel          #+#    #+#             */
/*   Updated: 2023/11/06 15:34:54 by zait-bel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
		{
			return ((char *)s + i);
		}
		i ++;
	}
	if (s[i] == (char)c)
		return ((char *)s + i);
	return (0);
}
/*int	main(void)
{
	char	str[] = "hello zainab!";
	printf ("%s\n", ft_strchr(str, 'z'));
	printf ("%s", strchr(str, 'z'));
}*/
