/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-bel <zait-bel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 19:09:04 by zait-bel          #+#    #+#             */
/*   Updated: 2023/11/19 13:07:34 by zait-bel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

// int	main(void)
// {
// 	t_list	*node;
// 	t_list	*node2;
// 	t_list	*node3;

// 	node = ft_lstnew("hello");
// 	node2 = ft_lstnew("this is the second node");
// 	node3 = ft_lstnew("this is the first node");
// 	ft_lstadd_front(&node, node2);
// 	ft_lstadd_front(&node, node3);
// 	printf ("%s", node->content);
// }
