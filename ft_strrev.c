/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchady <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 22:40:22 by bchady            #+#    #+#             */
/*   Updated: 2016/11/17 22:42:51 by bchady           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int i;
	int h;
	int stock;

	i = 0;
	h = 0;
	while (str[h] != '\0')
		h++;
	while (i < h)
	{
		h--;
		stock = str[i];
		str[i] = str[h];
		str[h] = stock;
		i++;
	}
	return (str);
}
