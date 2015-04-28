/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst2iter.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/28 22:46:56 by apachkof          #+#    #+#             */
/*   Updated: 2015/04/28 22:49:56 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lst2iter(t_list2 *lst, void (*f)(t_list2 *elem))
{
	while (lst != NULL)
	{
		f(lst);
		lst = lst->next;
	}
}
