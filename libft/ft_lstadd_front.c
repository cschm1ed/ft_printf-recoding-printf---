/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmied <cschmied@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 18:33:33 by cschmied          #+#    #+#             */
/*   Updated: 2022/12/18 15:35:35 by cschmied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new -> next = *lst;
	*lst = new;
	return ;
}

// int	main()
// {
// 	t_list	new, n1, n2;
// 	t_list	*ptr;

// 	new.content = "new start";
// 	n1.content = "old start";
// 	n2.content = "end";
// 	n1.next = &n2;
// 	n2.next = 0;
// 	ptr = &n1;
// 	ft_lstadd_front(&ptr, &new);
// 	while (ptr != 0)
// 	{
// 		printf("%s\n", (char *)ptr -> content);
// 		ptr = ptr -> next;
// 	}
// 	return (0);
// }