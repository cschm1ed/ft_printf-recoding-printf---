/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmied <cschmied@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 16:52:13 by cschmied          #+#    #+#             */
/*   Updated: 2022/12/21 13:53:01 by cschmied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char				*ptr;
	unsigned int		i;
	int					len_s;

	i = 0;
	len_s = ft_strlen(s);
	ptr = (char *)malloc(sizeof(char) * len_s + 1);
	if (!ptr)
		return (NULL);
	ptr[len_s] = 0;
	while (s[i])
	{
		ptr[i] = f(i, s[i]);
		i ++;
	}
	return (ptr);
}
