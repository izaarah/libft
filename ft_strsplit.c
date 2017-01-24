/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchady <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 22:44:18 by bchady            #+#    #+#             */
/*   Updated: 2016/11/17 18:12:35 by bchady           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		l;

	i = 0;
	j = 0;
	if (!s || !(tab = malloc(sizeof(char *) * (ft_strlen(s) / 2 + 1))))
		return (NULL);
	while (s[i])
	{
		l = 0;
		while (s[i] == c && s[i])
			i++;
		while (s[i + l] != c && s[i + l])
			l++;
		if (s[i])
		{
			tab[j++] = ft_strsub(s, i, l);
			i += l;
		}
	}
	tab[j] = NULL;
	return (tab);
}
