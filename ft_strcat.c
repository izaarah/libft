/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchady <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 15:50:45 by bchady            #+#    #+#             */
/*   Updated: 2016/11/10 22:50:53 by bchady           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	char *pdest;

	pdest = dest;
	while (*pdest)
		pdest++;
	while (*src)
	{
		*pdest = *src;
		pdest++;
		src++;
	}
	*pdest = '\0';
	return (dest);
}
