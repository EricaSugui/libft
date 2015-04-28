/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/28 19:05:57 by apachkof          #+#    #+#             */
/*   Updated: 2015/04/28 19:52:21 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	t_list	*next;

	if (alst == NULL || new == NULL)
		return ;
	next = *alst;
	*alst = new;
	new->next = next;
}
