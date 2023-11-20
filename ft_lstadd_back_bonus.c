/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-bel <zait-bel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 17:56:33 by zait-bel          #+#    #+#             */
/*   Updated: 2023/11/19 13:07:46 by zait-bel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	last = ft_lstlast(*lst);
	if (!last)
		*lst = new;
	last->next = new;
}

// int	main(void)
// {
// 	t_list	*node;
// 	t_list	*node2;
// 	t_list	*node3;

// 	node = ft_lstnew("hello");
// 	node2 = ft_lstnew("this is the second node");
// 	node3 = ft_lstnew("this is the third node");
// 	ft_lstadd_back(&node, node2);
// 	ft_lstadd_back(&node, node3);
// 	while (node)
// 	{
// 		printf ("%s\n", node->content);
// 		node = node->next;
// 	}
// }
