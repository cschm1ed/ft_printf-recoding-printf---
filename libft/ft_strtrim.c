/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmied <cschmied@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 12:28:22 by cschmied          #+#    #+#             */
/*   Updated: 2023/01/03 17:35:03 by cschmied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_if_in_set(char c, char const *set)
{
	int	i;

	i = 0;
	if (set == NULL)
		return (0);
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i ++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	int		j;

	i = 0;
	j = ft_strlen(s1) - 1;
	while (check_if_in_set(s1[i], set) == 1 && s1[i])
		i ++;
	if (i == ft_strlen(s1) || !(*s1))
		return (ft_strdup(""));
	while (check_if_in_set(s1[j], set) == 1 && j >= 0)
		j --;
	return (ft_substr(s1, i, j - i + 1));
}

// #include <stdio.h>

// int	main()
// {
// 	printf("%s\n", ft_strtrim("lorem ipsum dolor sit amet", "te"));
// 	// printf("%s\n", ft_strtrim("Hello World", "Hello World"));
// 	// printf("%s\n", ft_strtrim("Hello World", NULL));
// 	// printf("%s\n", ft_strtrim(NULL, NULL));
// 	// printf("%s\n", ft_strtrim("", ""));
// 	// printf("%s\n", ft_strtrim("Hello WOrld", ""));
// 	// printf("%s\n", ft_strtrim("", "Hello"));
// 	return (0);
// }