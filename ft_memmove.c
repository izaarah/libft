/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchady <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 22:05:47 by bchady            #+#    #+#             */
/*   Updated: 2016/11/17 22:34:11 by bchady           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	if (src < dest && (src + len) > dest)
	{
		while (len > 0)
		{
			((char *)dest)[len - 1] = ((char *)src)[len - 1];
			len--;
		}
		return (dest);
	}
	if (len == 0 || dest == src)
		return (dest);
	ft_memcpy(dest, src, len);
	return (dest);
}
