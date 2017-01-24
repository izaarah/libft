/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchady <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 22:06:52 by bchady            #+#    #+#             */
/*   Updated: 2016/11/20 15:24:37 by bchady           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;
	t_list *first;

	if (!lst && !f)
		return (NULL);
	new = (*f)(lst);
	first = new;
	while (lst->next != NULL)
	{
		new->next = (*f)(lst->next);
		new = new->next;
		lst = lst->next;
	}
	return (first);
}
