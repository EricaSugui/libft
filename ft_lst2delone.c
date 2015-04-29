/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst2delone.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/28 22:46:55 by apachkof          #+#    #+#             */
/*   Updated: 2015/04/29 16:42:45 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

void	ft_lst2delone(t_list2 **alst, void (*del)(void *, size_t))
{
	if (alst == NULL)
		return ;
	(*alst)->next->prev = (*alst)->prev;
	(*alst)->prev->next = (*alst)->next;
	del((*alst)->content, (*alst)->content_size);
	free(*alst);
	*alst = NULL;
}
