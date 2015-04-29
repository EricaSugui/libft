/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst2new.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/28 22:47:00 by apachkof          #+#    #+#             */
/*   Updated: 2015/04/29 17:02:20 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list2	*ft_lst2new(void const *content, size_t content_size)
{
	t_list2	*link;

	if ((link = (t_list2 *)malloc(sizeof(*link))) == NULL)
		return (NULL);
	link->next = NULL;
	link->prev = NULL;
	if (content != NULL && content_size != 0)
	{
		if ((link->content = malloc(content_size)) == NULL)
			return (NULL);
		ft_memcpy(link->content, content, content_size);
		link->content_size = content_size;
	}
	else
	{
		link->content = NULL;
		link->content_size = 0;
	}
	return (link);
}
