/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmied <cschmied@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 12:44:48 by cschmied          #+#    #+#             */
/*   Updated: 2022/12/17 12:50:50 by cschmied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	i = 0;
	while (i < n && (a[i] || b[i]))
	{
		if (a[i] != b[i])
		{
			if (a[i] > b[i])
				return (1);
			return (-1);
		}
		i ++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	printf("%d \t %d\n", ft_strncmp("Hello World", "Hello World", 11),
// 	strncmp("Hello World", "Hello World", 11));
// 	printf("%d \t %d\n", ft_strncmp("A", "B", 1),
// 	strncmp("A", "B", 1));
// 	printf("%d \t %d\n", ft_strncmp("Hello World", "Henlo World", 2), 
// 	strncmp("Hello World", "Henlo World", 2));
// 	printf("%d \t %d\n", ft_strncmp("", "", 100), 
// 	strncmp("", "", 100));
// 	printf("%d \t %d\n", ft_strncmp("C", "A", 100), 
// 	strncmp("C", "A", 100));
// 	return (0);
// }