/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmied <cschmied@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 12:05:23 by cschmied          #+#    #+#             */
/*   Updated: 2022/12/14 18:28:59 by cschmied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) != 0 || ft_isdigit(c) != 0)
		return (1);
	return (0);
}

// #include <stdio.h>
// #include <ctype.h>

// int main()
// {
// 	printf("ft_isalnum %d\t isalnum %d\n", ft_isalnum('a'), isalnum('a'));
// 	printf("ft_isalnum %d\t isalnum %d\n", ft_isalnum('z'), isalnum('z'));
// 	printf("ft_isalnum %d\t isalnum %d\n", ft_isalnum('0'), isalnum('0'));
// 	printf("ft_isalnum %d\t isalnum %d\n", ft_isalnum('9'), isalnum('9'));
// 	printf("ft_isalnum %d\t isalnum %d\n", ft_isalnum(' '), isalnum(' '));
// 	return (0);
// }