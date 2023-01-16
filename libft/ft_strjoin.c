/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmied <cschmied@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 11:41:50 by cschmied          #+#    #+#             */
/*   Updated: 2022/12/16 12:27:43 by cschmied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	size;

	if (s1 == 0 && s2 == 0)
		return (NULL);
	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	ptr = (char *)malloc(sizeof(char) * size);
	if (ptr == NULL)
		return (NULL);
	ft_memcpy(ptr, s1, ft_strlen(s1));
	ft_strlcpy(ptr + ft_strlen(s1), s2, ft_strlen(s2) + 1);
	return (ptr);
}

// #include <stdio.h>

// int	main()
// {
// 	char *ptr;

// 	ptr = ft_strjoin("Hello", " World");
// 	printf("%s\n", ptr);
// 	ptr = ft_strjoin("", " World");
// 	printf("%s\n", ptr);
// 	ptr = ft_strjoin("", "");
// 	printf("%s\n", ptr);
// 	ptr = ft_strjoin(NULL, " World");
// 	printf("%s\n", ptr);
// 	ptr = ft_strjoin(NULL, NULL);
// 	printf("%s\n", ptr);
// 	return (0);
// }