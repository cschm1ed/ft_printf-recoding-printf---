/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmied <cschmied@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 19:14:29 by cschmied          #+#    #+#             */
/*   Updated: 2022/12/18 15:45:13 by cschmied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst -> next)
		lst = lst -> next;
	return (lst);
}

// #include <stdio.h>

// int	main()
// {
// 	t_list	n1, n2, n3;

// 	n1.next = &n2;
// 	n2.next = &n3;
// 	n3.content = "Hello world";
// 	printf("%s", (char *)ft_lstlast(&n1) -> content);
// 	return (0);
// }