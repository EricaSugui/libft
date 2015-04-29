/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst2pop.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/29 18:37:19 by apachkof          #+#    #+#             */
/*   Updated: 2015/04/29 20:04:09 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list2	*ft_lst2pop(t_list2 **alst)
{
	t_list2	*cur;
	t_list2	*last;

	if (alst == NULL || (cur = *alst) == NULL)
		return (NULL);
	if (cur->next == NULL)
	{
		*alst = NULL;
		return (cur);
	}
	while (cur->next->next != NULL)
		cur = cur->next;
	last = cur->next;
	cur->next = NULL;
	last->prev = NULL;
	return (last);
}
