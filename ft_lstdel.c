/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchady <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 20:55:49 by bchady            #+#    #+#             */
/*   Updated: 2016/11/20 15:24:39 by bchady           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *navi;

	if (!alst)
		return ;
	navi = *alst;
	while (navi)
	{
		navi = navi->next;
		ft_lstdelone(&(*alst), (*del));
		*alst = navi;
	}
	*alst = NULL;
}
