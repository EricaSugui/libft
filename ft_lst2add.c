/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst2add.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/28 22:46:46 by apachkof          #+#    #+#             */
/*   Updated: 2015/04/28 22:48:27 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

void	ft_lst2add(t_list2 **alst, t_list2 *new)
{
	t_list2	*next;

	if (alst == NULL || new == NULL)
		return ;
	next = *alst;
	*alst = new;
	new->next = next;
}
