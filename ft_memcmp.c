/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchady <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 22:11:27 by bchady            #+#    #+#             */
/*   Updated: 2016/11/17 21:03:53 by bchady           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *ps1;
	unsigned char *ps2;

	ps1 = (unsigned char *)s1;
	ps2 = (unsigned char *)s2;
	if (s1 == s2 || n == 0)
		return (0);
	while (--n > 0 && *ps1 == *ps2)
	{
		ps1++;
		ps2++;
	}
	return (*ps1 - *ps2);
}
