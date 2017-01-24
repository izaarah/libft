/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchady <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 22:54:40 by bchady            #+#    #+#             */
/*   Updated: 2016/11/15 21:19:53 by bchady           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	size_t	a;

	a = 0;
	if (!(str = (char *)malloc(size + 1)))
		return (NULL);
	while (a <= size)
	{
		str[a] = '\0';
		a++;
	}
	return (str);
}
