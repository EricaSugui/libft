/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfold.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/29 20:39:36 by apachkof          #+#    #+#             */
/*   Updated: 2015/04/29 21:00:24 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstfold(t_list *lst, t_list *(*f)(t_list *res, t_list *elem))
{
	t_list	*res;
	t_list	*tmp;

	if ((res = lst) == NULL)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
		tmp = f(res, lst);
		free(res);
		res = tmp;
	}
	return (res);
}
