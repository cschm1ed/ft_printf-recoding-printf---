/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmied <cschmied@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 17:40:51 by cschmied          #+#    #+#             */
/*   Updated: 2022/12/21 12:37:23 by cschmied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	list = (t_list *)malloc(sizeof(t_list));
	if (list == 0)
		return (0);
	list -> content = content;
	list -> next = 0;
	return (list);
}

// #include <stdio.h>

// int	main()
// {
// 	t_list *ptr;

// 	ptr = ft_lstnew("Hello World");
// 	printf("%s\n", ptr -> content);
// 	free(ptr);
// 	return (0);
// }