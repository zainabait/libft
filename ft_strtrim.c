/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-bel <zait-bel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 19:27:29 by zait-bel          #+#    #+#             */
/*   Updated: 2023/11/23 21:21:23 by zait-bel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_srch(char const *str, char c)
{
	size_t	j;

	j = 0;
	while (str[j])
	{
		if (str[j] == c)
		{
			return (1);
		}
		j++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end; 

	if (!s1 || !set)
		return (NULL);
	start = 0;
	if (!*s1)
		end = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && ft_srch(set, s1[start]))
		start ++;
	while (end >= 0 && ft_srch(set, s1[end]))
		end --;
	return (ft_substr(s1, start, (end - start) + 1));
}
