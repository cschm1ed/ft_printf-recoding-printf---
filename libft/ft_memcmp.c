/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christianschmiedt <christianschmiedt@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 12:51:19 by cschmied          #+#    #+#             */
/*   Updated: 2022/12/22 16:53:03 by christiansc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	*b;

	i = 0;
	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	while (i < n)
	{
		if (a[i] != b[i])
			return (a[i] - b[i]);
		i ++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	printf("%d \t %d\n", ft_memcmp("Hello World", "Hello World", 11),
// 	 memcmp("Hello World", "Hello World", 11));
// 	printf("%d \t %d\n", ft_memcmp("Henlo World", "Hello World", 11),
// 	 memcmp("Henlo World", "Hello World", 11));
// 	printf("%d \t %d\n", ft_memcmp("a", "b", 1),
// 	 memcmp("a", "b", 1));
// 	printf("%d \t %d\n", ft_memcmp("", "", 100),
// 	 memcmp("", "", 100));
// 	printf("%d \t %d\n", ft_memcmp("abcefg", "abcwuefh", 3),
// 	 memcmp("abcefg", "abcwuefh", 3));
// 	printf("%d \t %d\n", ft_memcmp("Hello", "Hello", 0),
// 	 memcmp("Hello", "Hello", 0));
// 	return (0);
// }