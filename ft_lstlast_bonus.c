/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-bel <zait-bel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 17:14:56 by zait-bel          #+#    #+#             */
/*   Updated: 2023/11/20 14:23:30 by zait-bel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	if (!lst)
		return (NULL);
	tmp = lst;
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	return (tmp);
}

// int	main(void)
// {
// 	t_list	*node;
// 	t_list	*node2;
// 	t_list	*node3;

// 	node = ft_lstnew("the last one");
// 	node2 = ft_lstnew("this is the second node");
// 	node3 = ft_lstnew("this is the first node");
// 	ft_lstadd_front(&node, node2);
// 	ft_lstadd_front(&node, node3);
// 	printf ("%s", ft_lstlast(node)->content);
// }
