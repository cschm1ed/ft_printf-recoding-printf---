/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmied <cschmied@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 19:11:05 by cschmied          #+#    #+#             */
/*   Updated: 2022/12/21 12:37:08 by cschmied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != 0)
	{
		lst = lst-> next;
		i ++;
	}
	return (i);
}

// #include <stdio.h>

// int	main()
// {
// 	t_list	n1, n2, n3;

// 	n1.next = &n2;
// 	n2.next = &n3;
// 	n3.next = 0;
// 	printf("%d\n", ft_lstsize(&n1));
// 	return (0);
// }