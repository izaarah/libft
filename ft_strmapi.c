/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchady <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 22:36:08 by bchady            #+#    #+#             */
/*   Updated: 2016/11/17 22:32:18 by bchady           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char		*fresh_str;
	int			i;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	if (!(fresh_str = ft_strnew(ft_strlen(s))))
		return (NULL);
	while (s[i])
	{
		fresh_str[i] = f(i, s[i]);
		i++;
	}
	fresh_str[i] = '\0';
	return ((char *)fresh_str);
}
