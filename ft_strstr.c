/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchady <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 21:58:11 by bchady            #+#    #+#             */
/*   Updated: 2016/11/17 18:15:58 by bchady           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int i;

	i = 0;
	if (ft_strcmp(little, "") == 0)
		return ((char *)big);
	while (big[i])
	{
		if (ft_strncmp(little, big + i, ft_strlen(little)) == 0)
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}
