/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchady <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 22:24:56 by bchady            #+#    #+#             */
/*   Updated: 2016/11/15 16:23:27 by bchady           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int			size;
	int			a;
	char		*str;

	size = 0;
	while (src[size])
		size++;
	a = 0;
	if ((str = (char *)malloc(sizeof(char) * (size + 1))))
	{
		while (a < size)
		{
			str[a] = src[a];
			a++;
		}
		str[a] = '\0';
		return ((char *)str);
	}
	return (NULL);
}
