/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strinsert.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchady <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 15:36:34 by bchady            #+#    #+#             */
/*   Updated: 2016/11/20 16:05:34 by bchady           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strinsert(char *a, char *b, int p)
{
	char	*temp;

	temp = ft_strdup(a + p);
	ft_strclr(a + p);
	ft_strcat(ft_strcat(a, b), temp);
	free(temp);
	return (a);
}
