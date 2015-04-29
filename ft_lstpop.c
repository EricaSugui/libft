/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/29 19:51:03 by apachkof          #+#    #+#             */
/*   Updated: 2015/04/29 20:10:21 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstpop(t_list **alst)
{
	t_list	*cur;
	t_list	*last;

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
	return (last);
}
