/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst2map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/28 22:46:56 by apachkof          #+#    #+#             */
/*   Updated: 2015/04/29 17:01:13 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list2	*ft_lst2map(t_list2 *lst, t_list2 *(*f)(t_list2 *elem))
{
	t_list2	*new_list;
	t_list2	*cur;

	new_list = f(lst);
	if (lst == NULL || lst->next == NULL)
		return (new_list);
	cur = new_list;
	while (lst->next != NULL)
	{
		if (cur != NULL)
		{
			cur->next = f(lst->next);
			cur->next->prev = cur;
		}
		lst = lst->next;
	}
	return (new_list);
}
