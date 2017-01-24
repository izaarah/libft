/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchady <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 22:27:22 by bchady            #+#    #+#             */
/*   Updated: 2016/11/17 22:32:08 by bchady           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*fresh_str;
	int		i;

	i = 0;
	if (!s || !f)
		return (NULL);
	if (!(fresh_str = ft_strnew(ft_strlen(s))))
		return (NULL);
	while (s[i])
	{
		fresh_str[i] = f(s[i]);
		i++;
	}
	fresh_str[i] = '\0';
	return ((char *)fresh_str);
}
