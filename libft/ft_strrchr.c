/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christianschmiedt <christianschmiedt@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 13:57:51 by cschmied          #+#    #+#             */
/*   Updated: 2022/12/23 15:58:12 by christiansc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	uc;
	char			*str;

	i = ft_strlen(s);
	uc = (unsigned char)c;
	str = (char *)s;
	while (i >= 0)
	{
		if (str[i] == uc)
			return (str + i);
		i --;
	}
	return (NULL);
}
