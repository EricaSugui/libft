/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/28 19:07:19 by apachkof          #+#    #+#             */
/*   Updated: 2015/04/28 21:19:01 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_list;
	t_list	*cur;

	new_list = f(lst);
	if (lst == NULL || lst->next == NULL)
		return (new_list);
	cur = new_list;
	while (lst->next != NULL)
	{
		if (cur != NULL)
			cur->next = f(lst->next);
		lst = lst->next;
	}
	return (new_list);
}
