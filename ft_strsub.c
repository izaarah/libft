/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchady <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 17:48:50 by bchady            #+#    #+#             */
/*   Updated: 2016/11/15 20:14:02 by bchady           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *secure;

	if (!s)
		return (NULL);
	secure = ft_strnew(len);
	if (!secure)
		return (NULL);
	return (ft_strncpy(secure, s + start, len));
}
