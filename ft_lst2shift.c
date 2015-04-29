/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst2shift.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/29 20:14:58 by apachkof          #+#    #+#             */
/*   Updated: 2015/04/29 20:15:04 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list2	*ft_lst2shift(t_list2 **alst)
{
	t_list2	*cur;

	if (alst == NULL || (cur = *alst) == NULL)
		return (NULL);
	*alst = cur->next;
	cur->prev = NULL;
	return (cur);
}
