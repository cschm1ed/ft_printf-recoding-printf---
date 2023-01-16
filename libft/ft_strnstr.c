/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmied <cschmied@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 13:49:27 by cschmied          #+#    #+#             */
/*   Updated: 2022/12/21 13:19:49 by cschmied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	f_strcmp(const char *haystack, const char *needle)
{
	int	i;

	i = 0;
	while (needle[i])
	{
		if (haystack[i] == 0)
			return (1);
		else if (haystack[i] != needle[i])
			return (1);
		i ++;
	}
	return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int		len_needle;

	len_needle = ft_strlen((char *)needle);
	i = 0;
	if (!(*haystack))
		i = *haystack;
	if (!(*needle))
		return ((char *)haystack);
	while (i + len_needle <= len && haystack[i])
	{
		if (f_strcmp(haystack + i, needle) == 0)
			return ((char *)haystack + i);
		i ++;
	}
	return (NULL);
}

// #include <stdio.h>

// int	main()
// {
// 	printf("%s\t%s\n", ft_strnstr("Hello World", "World", 11),
// 	strnstr("Hello World", "World", 11));	
// 	printf("%s\t%s\n", ft_strnstr("Hello World", "World", 2), 
// 	strnstr("Hello World", "World", 2));	
// 	printf("%s\t%s\n", ft_strnstr("Hello World", "", 100), 
// 	strnstr("Hello World", "", 100));	
// 	printf("%s\t%s\n", ft_strnstr("", "", 0), strnstr("", "", 0));	
// 	printf("%s\t%s\n", ft_strnstr("Goodbye World", "Hello World", 13), 
// 	strnstr("Goodbye World", "Hello World", 13));
// 	return (0);
// }
