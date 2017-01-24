/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchady <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 21:56:21 by bchady            #+#    #+#             */
/*   Updated: 2016/11/14 17:40:18 by bchady           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*pdest;
	char	*psrc;
	size_t	a;

	pdest = (char *)dest;
	psrc = (char *)src;
	a = 0;
	while (a < n)
	{
		pdest[a] = psrc[a];
		if (pdest[a] == c)
			return (pdest + a + 1);
		a++;
	}
	return (NULL);
}
