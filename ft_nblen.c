/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nblen.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchady <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 17:11:39 by bchady            #+#    #+#             */
/*   Updated: 2016/11/15 17:32:19 by bchady           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_nblen(int n)
{
	int i;

	i = 0;
	if (n < 0)
		i = i + 1;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i == 0 ? 1 : i);
}