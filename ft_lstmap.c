/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loamar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 11:22:01 by loamar            #+#    #+#             */
/*   Updated: 2019/10/21 15:28:58 by loamar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list		*tmp;
	t_list		*list;

	tmp = NULL;
	if (lst && f)
	{
		while (lst)
		{
			list = ft_lstnew((*f)(lst->content));
			ft_lstadd_back(&tmp, list);
			lst = lst->next;
		}
	}
	return (tmp);
}
