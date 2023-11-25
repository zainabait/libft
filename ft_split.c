/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-bel <zait-bel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 17:59:35 by zait-bel          #+#    #+#             */
/*   Updated: 2023/11/23 21:13:14 by zait-bel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			count ++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

void	**ft_free(char **arr, size_t count)
{
	size_t	j;

	j = 0;
	while (j < count)
	{
		free (arr[j]);
		j++;
	}
	free(arr);
	return (NULL);
}

char	**ft_fill_arr(char **arr, char c, char const	*s)
{
	size_t		i;
	size_t		j;
	size_t		start;
	size_t		count;
	size_t		end;

	i = 0;
	j = 0;
	count = ft_count(s, c);
	while (j < count)
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			start = i;
		while (s[i] && s[i] != c)
			i++;
		end = i - 1;
		arr[j] = ft_substr(s, start, (end - start) + 1);
		if (!arr[j])
			return (ft_free(arr, j), NULL);
		j++;
	}
	arr[j] = 0;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char			**arr;
	size_t			count;

	if (s == NULL)
		return (NULL);
	count = ft_count(s, c);
	arr = (char **)malloc((count + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	arr = ft_fill_arr(arr, c, s);
	return (arr);
}
