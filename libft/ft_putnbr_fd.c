/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmied <cschmied@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 17:21:28 by cschmied          #+#    #+#             */
/*   Updated: 2023/01/03 17:34:31 by cschmied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	writenbr_recursively(long n, int fd)
{
	if (n == 0)
		return ;
	else
		writenbr_recursively(n / 10, fd);
	ft_putchar_fd(n % 10 + '0', fd);
	return ;
}

void	ft_putnbr_fd(int n, int fd)
{
	long	n_cpy;

	n_cpy = n;
	if (n_cpy < 0)
	{
		ft_putchar_fd('-', fd);
		n_cpy = -n_cpy;
	}
	if (n_cpy == 0)
	{
		ft_putchar_fd('0', fd);
		return ;
	}
	writenbr_recursively(n_cpy, fd);
	return ;
}

// #include <limits.h>

// int	main()
// {
// 	ft_putnbr_fd(INT_MIN, 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_putnbr_fd(INT_MAX, 1);
// 	return (0);
// }