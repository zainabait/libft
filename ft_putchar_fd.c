/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-bel <zait-bel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 10:15:35 by zait-bel          #+#    #+#             */
/*   Updated: 2023/11/15 19:40:28 by zait-bel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

void	ft_putchar_fd(char c, int fd)
{
	if (fd >= 0)
		write(fd, &c, 1); 
}

// int	main(void)
// {
//     int file_zait = open("zait.txt", O_WRONLY | O_CREAT , 0777);
//      close(file_zait);
//     int file = open("zait1.txt", O_WRONLY | O_CREAT , 0777);

//     printf("%d", file);
//     ft_putchar_fd('b', file);
// }