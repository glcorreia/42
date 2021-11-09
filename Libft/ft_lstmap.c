/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnuno-pa <gnuno-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:32:26 by gnuno-pa          #+#    #+#             */
/*   Updated: 2021/11/09 16:19:55 by gnuno-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*temp;

	if (!lst)
		return (NULL);
	temp = ft_lstnew((*f)(lst->content));
	new = temp;
	while (lst->next)
	{
		lst = lst->next;
		temp->next = ft_lstnew((*f)(lst->content));
		if (!temp->next)
		{
			ft_lstdelone(temp->next, del);
			return (NULL);
		}
		temp = temp->next;
	}
	return (new);
}
