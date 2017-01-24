/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchady <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 22:14:30 by bchady            #+#    #+#             */
/*   Updated: 2016/11/14 16:14:43 by bchady           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	a;
	char	*cleanstr;

	if (!s)
		return (0);
	i = 0;
	while (ft_isspace(s[i]))
		i++;
	a = ft_strlen(s) - 1;
	if (s)
	{
		while (a > i && ft_isspace(s[a]))
			a--;
		if (a < i)
			return (cleanstr = ft_strdup(""));
		return (cleanstr = ft_strsub(s, i, a - (size_t)i + 1));
	}
	return (NULL);
}
