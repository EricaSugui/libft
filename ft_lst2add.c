/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst2add.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/28 22:46:46 by apachkof          #+#    #+#             */
/*   Updated: 2015/04/29 20:10:02 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lst2add(t_list2 **alst, t_list2 *new)
{
	t_list2	*next;

	if (alst == NULL || new == NULL)
		return ;
	next = *alst;
	next->prev = new;
	*alst = new;
	new->next = next;
}
