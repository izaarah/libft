/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchady <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 15:53:45 by bchady            #+#    #+#             */
/*   Updated: 2016/11/09 21:22:41 by bchady           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	char *pdest;

	pdest = dest;
	while (*pdest)
		pdest++;
	while (*src && n--)
	{
		*pdest = *src;
		pdest++;
		src++;
	}
	*pdest = 0;
	return (dest);
}
