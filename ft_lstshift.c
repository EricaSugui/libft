/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstshift.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/29 20:15:13 by apachkof          #+#    #+#             */
/*   Updated: 2015/04/29 20:15:18 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstshift(t_list **alst)
{
	t_list	*cur;

	if (alst == NULL || (cur = *alst) == NULL)
		return (NULL);
	*alst = cur->next;
	return (cur);
}
