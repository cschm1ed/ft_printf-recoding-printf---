/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmied <cschmied@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 19:26:42 by cschmied          #+#    #+#             */
/*   Updated: 2022/12/21 12:37:58 by cschmied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp_next;

	if (!del)
		return ;
	while ((*lst))
	{
		temp_next = (*lst)-> next;
		ft_lstdelone((*lst), del);
		*lst = temp_next;
	}
	return ;
}

// void	f()

// int	main()
// {
// 	t_list * n1, n2, n3;

// 	n1 = ft_lstnew("sth");
// 	n2 = ft_lstnew("sth else");
// 	n3 = ft_lstnew("nonsense");
// 	n1 -> next = &n2;
// 	n2 -> next = &n3;
// 	n3 -> next = 0;
// 	ft_lstclear(&n1, )
// }