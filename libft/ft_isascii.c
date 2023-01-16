/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmied <cschmied@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 12:06:45 by cschmied          #+#    #+#             */
/*   Updated: 2022/12/14 18:32:14 by cschmied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 0177)
		return (1);
	return (0);
}

// #include <stdio.h>
// #include <ctype.h>

// int	main()
// {
// 	printf("%d\t %d\n", ft_isascii('a'), isascii('a'));
// 	printf("%d\t %d\n", ft_isascii(178), isascii(178));
// 	return (0);
// }
