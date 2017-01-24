/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchady <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 22:59:05 by bchady            #+#    #+#             */
/*   Updated: 2016/11/17 22:32:57 by bchady           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t			secure;
	unsigned char	*big2;

	big2 = (unsigned char *)big;
	if (*little == 0)
		return ((char *)big);
	secure = ft_strlen(little);
	while (*big2 && secure <= len--)
	{
		if (ft_memcmp(little, big2, secure) == 0)
			return ((char *)big2);
		big2++;
	}
	return (NULL);
}
