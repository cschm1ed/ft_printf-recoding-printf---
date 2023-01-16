/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmied <cschmied@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 11:50:06 by cschmied          #+#    #+#             */
/*   Updated: 2022/12/14 18:29:59 by cschmied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
		return (1);
	return (0);
}

// #include <stdio.h>
// #include <ctype.h>

// int	main()
// {
// 	printf("%d\t %d\n", ft_isalpha('A'), isalpha('A'));
// 	printf("%d\t %d\n", ft_isalpha('0'), isalpha('0'));
// 	return (0);
// }