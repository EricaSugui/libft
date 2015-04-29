/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst2del.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/28 22:46:54 by apachkof          #+#    #+#             */
/*   Updated: 2015/04/29 19:25:22 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

void	ft_lst2del(t_list2 **alst, void (*del)(void *, size_t))
{
	t_list2	*next;

	if (alst == NULL)
		return ;
	while (*alst != NULL)
	{
		next = (*alst)->next;
		ft_lst2delone(alst, del);
		*alst = next;
	}
}
