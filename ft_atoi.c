/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchady <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 22:08:18 by bchady            #+#    #+#             */
/*   Updated: 2016/11/16 17:35:28 by bchady           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int nb;
	int sign;

	nb = 0;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	sign = *str == '-' ? -1 : 1;
	if (*str == '+' || *str == '-')
		str++;
	while (*str != 0 && (*str >= '0' && *str <= '9'))
	{
		nb = nb * 10 + (*str - '0');
		str++;
	}
	return (sign * nb);
}
