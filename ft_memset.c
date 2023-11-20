/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-bel <zait-bel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:07:00 by zait-bel          #+#    #+#             */
/*   Updated: 2023/11/14 17:21:51 by zait-bel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>

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

/*int	main(void)
{
	// int	numbers[] = {-1, 2};
	//int nbr = 58;
	//int b1 = (char)nbr;
	// ft_memset(numbers, 0, 4);
	// ft_memset(numbers, 243, 1);
	// ft_memset((char *)numbers + 1, 255, 1);
	// ft_memset((char *)numbers + 2, 255, 1);
	// ft_memset((char *)numbers + 3, 255, 1);
	// ft_memset((char *)numbers + 4, 57, 1);
	// ft_memset((char *)numbers + 5, 5, 1);
	//printf("%d", numbers[0]);
	//  ft_memset(numbers, 255, 4);
	//  ft_memset(numbers, 219, 1);
	//  printf("%d", numbers[0]);
	// ft_memset((char *)nbr + 1, 5, 1);
	// printf("%d", nbr);
	
}
*/