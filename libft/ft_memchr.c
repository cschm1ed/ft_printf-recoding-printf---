/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmied <cschmied@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 12:48:03 by cschmied          #+#    #+#             */
/*   Updated: 2022/12/14 19:06:54 by cschmied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)(s + i));
		i ++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int	main()
// {
// 	printf("%p\t%p\n", ft_memchr("Hello World", 'l', 5),
// 	 memchr("Hello World", 'l', 5));
// 	printf("%p\t%p\n", ft_memchr("Hello World", 'l', 0),
// 	 memchr("Hello World", 'l', 0));
// 	printf("%p\t%p\n", ft_memchr("Hello World", 'd', 20),
// 	 memchr("Hello World", 'd', 20));
// 	printf("%p\t%p\n", ft_memchr("", 'd', 20), memchr("", 'd', 20));
// 	printf("%p\t%p\n", ft_memchr("Hello World", 'x', 20), 
// 	memchr("Hello World", 'x', 20));
// 	return (0);
// }